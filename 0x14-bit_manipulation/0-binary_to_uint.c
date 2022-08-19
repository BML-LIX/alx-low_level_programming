#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: 0 or converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, m;

	if (b == NULL)
		return (0);

	m = _length(b);

	for (i = 0; i != m; i++)
	{
		if (b[m - i - 1] == '1')
			n += 1 << i;
		else if (b[m - i - 1] != '0')
			return (0);
	}

	return (n);
}

/**
 * _length - finds the length of a string
 * @s: pointer to the string to check
 * Return: void
*/
int _length(const char *s)
{
int i = 0;
while (s[i])
	i++;

return (i);
}
