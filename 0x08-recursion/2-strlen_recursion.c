#include "main.h"
/**
 *_strlen_recursion - prints the lengthof the string
 *@s: string parameter
 *Return: length of the string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
s++;
return (1 + _strlen_recursion(s));
}
