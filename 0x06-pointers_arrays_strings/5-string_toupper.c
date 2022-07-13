#include "main.h"

/**
*string_toupper - changes all lowwercase letter touppercase
*@s: a parameter
*Return: string
*/
char *string_toupper(char *s)
{
int n;

while (s[n])
{
if (s[n] >= 97 && s[n] <= 122)
s[n] -= 32;
n++;
}
return (s);
}
