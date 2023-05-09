#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *file);
void close_file(int fd);

/**
 * create_buff - Assigns 1024 bytes to buffer
 * @file: Name of buffer file
 *
 * Return: Pointer to newly assigned buffer
 */
char *create_buff(char *file)
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
 * close_file - Close the file descriptor
 * @fd: closed filedescriptor
 */
void close_file(int fd)
{
	int s;

	s = close(fd);

	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies content from one file to anothe
 * @argc: Number to argument assigned to program
 * @argv: Array  pointer th argumrent
 *
 * Return: Success 0
 *
 * Desc: exit wit code 97 if argument count is not correct
 * exit 98 if file_from does not exist or cannot read
 * exit 99 if file_to cannot be created or written
 * exit 100 if file_to or file_from cannot be closed
 */
int main(int argc, char *argv[])
{
	int frm, to, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buff(argv[2]);
	frm = open(argv[1], O_RDONLY);
	rd = read(frm, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || rd == -1)
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

		rd = read(frm, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	close_file(frm);
	close_file(to);

	return (0);
}
