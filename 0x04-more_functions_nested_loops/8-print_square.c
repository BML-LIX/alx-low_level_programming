#include "main,h"

/**
*print_square -  prints a square, followed by a new line.
*@size: size of the square
*/
void print_square(int size)
{
int n1, n2;
if (size <= 0)
{
_printchar('\n');
}
else
{
for (n1 = 0; n1 < size; n++)
{
for (n2 = 0; n2 < size; n2++)
{
_printchar(35);
}
_putchar('\n');
}
}
}
