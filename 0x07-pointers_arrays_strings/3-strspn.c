#include "main.h"

/**
*_strspn - gets the length of a prefix substring.
*@s: a string
*@accept:  accepted string
*Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int n1 = 0, n2, n3 = 0;

while (accpet[n1])
{
n2 = 0;

while (s[n2] != 32)
{
if (accept[n1] == s[n2])
{
n3++;
}
n2++;
}
n1++;
}
return (n3);
}
