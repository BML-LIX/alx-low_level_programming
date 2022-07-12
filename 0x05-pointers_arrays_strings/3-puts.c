#include "main.h"

/**
*_puts - function that prints a string,
*followed by new line ,to stdout.
*@str:parameter of string to _puts function
*/
void _puts(char *str)
{
for (; *str != '\0')
{
_putchar(*str);
}
_putchar('\n');
}
