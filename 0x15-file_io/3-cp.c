#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int m);

/**
 * create_buffer - allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @m: The file descriptor to be closed.
 */
void close_file(int m)
{
	int n;

	n = close(m);

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", m);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file.
 * @argc: The number of arguments
 * @argv: array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int orig, to, red, wrt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_orig file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	orig = open(argv[1], O_RDONLY);
	red = read(orig, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (orig == -1 || red == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read orig file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wrt = write(to, buffer, red);
		if (to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		red = read(orig, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (red > 0);

	free(buffer);
	close_file(orig);
	close_file(to);

	return (0);
}
