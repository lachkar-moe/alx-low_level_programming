#include "main.h"

/**
 * read_textfile - reads and prints output
 * @filename: name of the file
 * @letters: number of letters
 * Return: the number of letters printed, 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t f_open = open(filename, O_RDONLY);
	ssize_t f_read = read(f_open, buffer, letters);
	ssize_t	f_write = write(STDOUT_FILENO, buffer, f_read);

	if (filename == NULL)
		return (0);

	if (buffer == NULL)
		return (0);

	if (f_open == -1 || f_read == -1 || f_write == -1 || f_write != f_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(f_open);

	return (f_write);
}
