#include "main.h"

/**
*_strspn - gets the length of a prefix substring.
*@s: a string
*@accept:  accepted string
*Return: number of bytes in the initial segment of
*s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int n, n1;

for (n1 = 0; *(s + n1); n1++)
{
for (n = 0; *(accept + n); n++)
{
if (*(s + n1) == *(accept + n))
break;
}
if (*(accept + n) == '\0')
break;
}
return (n1)
}
