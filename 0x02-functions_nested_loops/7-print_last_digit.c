#include "main.h"

/**
*print_last_digit - last digit of a nimber
*@n: argument
*Return: last digit
*/
int print_last_digit(int n)
{
int m;
if (n < 0)
n = -n;
m = n % 10;
_putchar('0' + m);
_putchar('\n');
return (0);
}
