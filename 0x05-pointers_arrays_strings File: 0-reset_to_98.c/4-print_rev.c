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
{
for (n1 = n - 1; n1 >= 0; n1--)
{
_putchar(s[n1]);
}
n1++
}
}
