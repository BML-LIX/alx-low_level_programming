#include "main.h"
#include <string.h>

/**
*print_rev -  prints a string, in reverse, followed by a new line.
*@s: parameter that holds a string .
*/
void print_rev(char *s)
{
int n, n1;

n1 = 0;
while (s[n1] != '\0')
n1++;

for (n = n1 - 1; n >= 0; n--)
{
_putchar(s[n]);
}
_putchar('\n');
}
