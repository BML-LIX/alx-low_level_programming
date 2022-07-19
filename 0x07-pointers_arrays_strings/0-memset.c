#include "main.h"

/**
*char *_memset - fills memory with a constant byte.
*@s: string
*@b: character
*@n:  an interger
*Return: a string
*/
char *_memset(char *s, char b, unsigned int n)
{

unsigned int n1;

for (n1 = 0; n1 < n; n1++)
s[n1] = b;

return (s);
}
