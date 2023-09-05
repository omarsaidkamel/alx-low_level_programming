#include <stdio.h>
#include "main.h"

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;
       	
	s = malloc(sizeof(int)*size);

	if(size == 0)
		return NULL;
	
	if(s == NULL)
		return NULL;

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
