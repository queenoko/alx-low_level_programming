#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: Pointer to file to create
 * @text_content: Pointer to string to write in file
 *
 * Return: -1 if function fails, else 1
 */
int create_file(const char *filename, char *text_content)
{
	int wr, op, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, lent);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
