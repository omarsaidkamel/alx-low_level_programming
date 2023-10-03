#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end to the  file
 * @filename: The filename to open and append in
 * @text_content: The NULL terminated string to add
 * Return: 1 on success, -1 if the file can not be created, nor written,
 * nor write fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, l = 0;

	if (filename == NULL)
		return (-1);

	x = open(filename, O_RDWR | O_APPEND);
	if (x < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(x);
		return (1);
	}

	while (*(text_content + l))
		len++;

	y = write(x, text_content, l);
	close(x);
	if (y < 0)
		return (-1);

	return (1);
}
