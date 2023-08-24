#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest, *start = src;
	int srclen = 0;

	while (*src)
	{
		srclen++;
		src++;
	}

	if (n > srclen)
		n = srclen;

	src = start;

	while (*dest)
		dest++;

	while (n--)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
