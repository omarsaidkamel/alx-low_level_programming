#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints
 * to the POSIX STDOUT
 * @filename: The filename to open
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes;
	char buffer[letters * 8];
	if(!filename || !letters)
		return 0;
	file = open(filename, O_RDONLY);
	if(file == -1)
		return 0;
	bytes = read(file, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer, bytes);
	close(file);
	return (bytes);

}
