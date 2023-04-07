/*
 * File: 0-read_textfile.c
 * Author: Queensly Udongwo
 */

#include "main.h"
#include  <stdlib.h>

/**
 * read_textfile - Read a text file and prints it to POSIX stdout
 * @filename: A pointer to the name of the file
 * @letters: The number of letters the function should read and print
 *
 * Return: If the function fails or is NULL - 0
 *  o/w - the actual number of bytes the function can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open, read, write;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(open, buff, letters);
	write = write(STDOUT_FILENO, buff, read);

	if (open == -1 || read == -1 || write == -1 || w != r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(open);

	return (write);
}
