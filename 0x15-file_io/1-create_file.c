#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int m, m1, i;

if (filename == NULL)
	return (-1);

m = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

if (m == -1)
	return (-1);

if (text_content)
{
	for (i = 0; text_content[i] != '\0'; i++)
		;
	m1 = write(m, text_content, i);
	if (m1 == -1)
		return (-1);
}

close(m);
return (1);
}
