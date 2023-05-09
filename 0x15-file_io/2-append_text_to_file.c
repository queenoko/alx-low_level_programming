#include "main.h"

/**
 * append_text_to_file - Appends text to the end of file
 * @filename: Pointer to name of file
 * @text_content: String to added at the end of the file
 *
 * Return: -1 if filename is NULL or function fails, and if the user
 * does not exist with write permission, else 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, lent);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
