#include "main.h"

/**
*_strspn - gets the length of a prefix substring.
*@s: a string
*@accept:  accepted string
*Return: number of bytes in the initial segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0, n1, n2 = 0;

while (accpet[n])
{
n1 = 0;

while (s[n1] != 32)
{
if (accept[n] == s[n1])
{
n2++;
}
n1++;
}
n++;
}
return (n2);
}
