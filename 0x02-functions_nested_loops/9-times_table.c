#include "main.h"

/**
* times_table - prints table of nine
*/
void times_table(void)
{
int n1, n2, n3;
for (n1 = 0; n1 < 10; n1++)
{
for (n2 = 0; n2 < 10; n2++)
{
n3 = n1 * n2;
if (n2 == 0)
{
_putchar(n3 + '0');
}
else if (n3 >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((n3 / 10) + '0');
_putchar((n3 % 10) + '0');
}
else if (n2 != 0; &&n3 < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(n3 + '0');
}
}
_putchar('\n');
}
}
