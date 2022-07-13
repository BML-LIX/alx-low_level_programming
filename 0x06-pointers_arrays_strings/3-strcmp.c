#include "main.h"
#include <string.h>

/**
*_strcmp - copies a string.
*@s1: parameter 1
*@s2: parameter 2
*Return: Always 0
*/
int _strcmp(char *s1, char *s2)
{
int n;

for (n = 0; s1[n] != '\0' || s[2] != '\0'; n++)
{
if (s1[n] != s2[n])
return (s1[n] - s2[n]);
}
return (0);
}
