#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

	int n = 0;
	int f_open, f_write, j, k;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_open = open(argv[1], O_RDONLY);
	if (f_open < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}

	f_write = open(argv[2],  O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((n == read(f_open, buffer, BUFSIZ)) > 0)
	{
		if (f_write < 0 || write(f_write, buffer, n) != n)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(f_open);
			exit(99);
		}
	}


	if (n < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}

	j = close(f_open);
	k = close(f_write);

	if (j < 0 || k < 0)
	{
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_open);

		if (k < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_write);
		exit(100);
	}

	return (0);

}
