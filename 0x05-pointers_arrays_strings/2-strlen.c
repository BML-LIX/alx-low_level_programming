#include "main.h"
#include <string.h>

/**
*_strlen - a function that returns the length of a string.
*@s: parameter to point lengthof string
*Return: length of the string.
*/
int _strlen(char *s)
{
int len;
for (len = 0; s[len] != '\0'; len++);
return (len);
}
