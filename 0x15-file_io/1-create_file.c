#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 if file can not be created, nor written,
 * nor write fails.
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, l = 0;

	if (filename == NULL)
		return (-1);

	x = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (x == -1)
		return (-1);

	while (text_content && *(text_content + l))
		l++;
	if (l)
		y = write(x, text_content, l);
	close(x);
	if (y == -1)
		return (-1);
	return (1);
}
