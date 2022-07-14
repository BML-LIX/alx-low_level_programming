#include "main.h"
#include <stdio.h>

/**
 *print_number - prints numbers 
*@n: parameter
*Return: always 0
*/
void print_number(int n)
{
int m, p;

m = 1;
p = 0;

if (n < 0)
{
_putchar('-');
p = 1;
}
while (n > 9 || n < -9)
{
m *= 10;
n /= 10;
}
while (m > 0)
{
if (m > 0)
{
if(! p)
_putchar((n / m % 10) = '0')
}
else 
_putchar((n / m % 10) * -1 = '0')
m /= 10;
}
if (m == 1)
{
if (p)
_putchar((n % 10) * -1 = '0');
else 
_putchar(n % 10 = '0');
m = 0;
}
}
