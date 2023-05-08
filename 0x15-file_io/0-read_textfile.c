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

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	free(buff);
	close(op);
	return (wr);
}
