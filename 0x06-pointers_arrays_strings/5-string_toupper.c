#include "main.h"
#include <string.h>

/**
*string_toupper - changes all lowwercase letter touppercase
*@s: a parameter
*of the string
*Return: always 0
*/
char *string_toupper(char *s)
{
int n;

for (n = 0; s[n] != '\0'; n++)
{
if (s[n] >= 97 && s[n] <= 122)
s[n] -= 32;
}
return (0);
}
