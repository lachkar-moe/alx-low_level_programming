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
	int f_open, f_write;

	if (filename == NULL)
		return (-1);

	f_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (f_open < 0)
		return (-1);

	if (text_content != NULL)
	{
		while  (text_content[length])
			length++;
	
		f_write = write(f_open, text_content, length);
		if (f_write != length)
			return (-1);
	}
	close(f_open);

	return (1);
}
