#include "main.h"

/**
*string_toupper - changes all lowwercase letter touppercase
*@s: a parameter
*Return: string
*/
char *string_toupper(char *s)
{
int n = 0;

while (s[n++])
{
if (s[n] >= 'a' && s[n] <= 'z')
s[n] = s[n] - 32;
}
return (s);
}
