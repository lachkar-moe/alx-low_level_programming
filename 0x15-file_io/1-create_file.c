#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to a string.
 *
 * Return: If fails:  -1,  Otherwise: 1.
 */

int create_file(const char *filename, char *text_content)
{
	int length = 0;
	int f_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	int f_write = write(f_open, text_content, length);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}


	if (f_open == -1 || f_write == -1)
		return (-1);

	close(f_open);

	return (1);
}
