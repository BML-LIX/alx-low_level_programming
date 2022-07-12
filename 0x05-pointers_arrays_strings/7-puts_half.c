#include "main.h"
#include <string.h>

/**
*puts_half - prints half of a string, followed by a new line.
*@str: a pointer to string
*
*Return: void
*/
void puts_half(char *str)
{
int n, n1, n2;
n = strlen(str);
if (n % 2 == 1)
{
n1 = n / 2 + 1;
}
else
{n1 = n / 2;
}
for (n2 = n1; n2 < n; n2++)
{
_putchar(str[n2]);
}
_putchar('\n');
}
