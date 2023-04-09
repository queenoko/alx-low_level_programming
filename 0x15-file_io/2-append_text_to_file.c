/*
 * File: 2-append_text_to_file.c
 * Author: Queensly Udongwo
 */

#include "main.h"

/**
 * append_text_to_file - Appends text at the end of the file
 * @filename: Pointer to the name of the file
 * @text_content: String to be added at the end of the file
 *
 * Return: 1 on success and -1 on failure or filename exist or no
 * permission to write into the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, length);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
