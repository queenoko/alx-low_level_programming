#include  "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: Pointer to the name of file
 * @letters: Number of letters the function will read and print
 * Return: 0 if filename is NULL or function fails
 * 0/w - The actual number of byte the function can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(0);

	return (wr);
}
