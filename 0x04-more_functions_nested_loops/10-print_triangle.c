#include "main.h"

/**
*print_triangle - Prints the triangle followed by the triangle.
*@size: interger for the triangle size
*Return: Always 0
*/
void print_triangle(int size)
{
int n, n1;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (n = 1; n <= size; n++)
{
for (n1 = 1; n1 <= size; n1++)
{
_putchar(' ');
}
for (n1 = 1; n1 <= n; n1++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
