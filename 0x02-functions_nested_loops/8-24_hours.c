#include "main.h"

/**
 * jack_bauer - prints minutes in 24 hours
 */
void jack_bauer(void)
{
int n;
int m;

for (n = 0; n < 24; n++)
{
for (m = 1; m < 60; m++)
{
if (n < 10)
{
_putchar('0');
_putchar(n + '0');
}
else if (n >= 10)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}

if (m < 10)
{
_putchar(':');
_putchar('0');
_putchar(m + '0');
}
else if (m >= 10)
{
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
}
_putchar('\n');
}
}
}
