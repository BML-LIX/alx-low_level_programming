#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: file name
 * @text_content: string to add to end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int m, m1, i;

	if (text_content == NULL)
		return (1);
	if (filename == NULL)
		return (-1);

	m = open(filename, O_APPEND | O_WRONLY);
	if (m == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	m1 = write(m, text_content, i);
	if (m1 == -1)
		return (-1);

	close(m);
	return (1);
}
