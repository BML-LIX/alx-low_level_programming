#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: number of letters the function will read and print.
 *
 * Return: 0 if the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, red, wrt;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	red = read(opn, buf, letters);
	wrt = write(STDOUT_FILENO, buf, red);

	if (opn == -1 || red == -1 || wrt == -1 || wrt != red)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(opn);

	return (wrt);
}
