#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: A pointer to the file.
 * @text_content: The string to add.
 *
 * Return: If the function fails or NULL -1, Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	 int length = 0;
	 int f_open, f_write;

	if (filename == NULL)
		return (-1);

	f_open = open(filename, O_WRONLY | O_APPEND);

	if (f_open < 0)
		return (-1);

	if (text_content != NULL)
	{

		while (text_content[length])
			length++;


		f_write = write(f_open, text_content, length);

		if (f_write != length)
			return (-1);

	}
	close(f_open);

	return (1);
}
