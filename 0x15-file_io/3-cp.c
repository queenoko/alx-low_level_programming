/*
 * File: 3-cp.c
 * Author: Queensly Udongwo
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_buffer(char *file);
void end_file(int fd);

/**
 * make_buffer - creates and allocate 1024 bytes for a buffer
 * @file: Name of the file buffer
 *
 * Return: Pointer to the new allocated buffer
 */
char *make_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * end_file - Closes file descriptors
 * @fd: File descriptor to be closed
 */
void end_file(int fd)
{
	int cl;

	cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy the content of a file to another file
 * @argc: Number of arguments supplied to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 Success
 *
 * Description: If argument count is incorrect, exit on 97
 *	if file_from does not exist or cannot read, exit on 98
 *	if file_to cannot be created or written to, exit on 99
 *	if file_from or file_to cannot be closed, exit on 100
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = make_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n",
					argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(to, buff, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n",
					argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	end_file(from);
	end_file(to);

	return (0);
}
