#include "main.h"

/**
*_strchr -locates a character in a string.
*@s: string
*@c:another character
*Return: a string
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
}
if (*s == c)
{
return (s);
}
return (0);
}
