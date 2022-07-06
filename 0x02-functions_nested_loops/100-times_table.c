#include "main.h"

/**
*print_times_table - prints the table of n
*@n: limit
*/
void print_times_table(int n)
{
int n1, n2, n3;

if (n >= 0 && n <= 15)
{
for (n1 = 0; n1 <= n; n1++)
{
for (n2 = 0; n2 <= n; n2++)
{
n3 = n1 * n2;
if (n2 == 0)
{
_putchar(n3 + '0');
}
else if (n3 >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((n3 / 100) + '0');
_putchar(((n3 / 10) % 10) + '0');
_putchar((n3 % 10) + '0');
}

else if (n3 >= 10 && n3 < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((n3 / 10) + '0');
_putchar((n3 % 10) + '0');
}
else if (n2 != 0 && n3 < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(n3 + '0');
}
}
_putchar('\n');
}
}
}
