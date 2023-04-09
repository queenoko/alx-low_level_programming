/*
 * File: 1-create_file.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Pointer to the name of file ti create
 * @text_content: Pointer to the string to write to the file
 *
 * Return: - -1 if function fails, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, length);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
