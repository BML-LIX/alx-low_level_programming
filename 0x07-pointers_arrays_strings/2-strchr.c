#include "main.h"

/**
*_strchr -locates a character in a string.
*@s: string
*@c:another character
*Return: a string
*/
char *_strchr(char *s, char c)
{
int n = 0, n1;

while (s[n])
{
for (n1 = 0; n1 < n; n1++)
{
if (c == s[n1])
s += n1;
return (s);
n++;
}
return ('\0');
}
}
