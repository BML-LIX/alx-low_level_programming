#include <stdio.h>

/**
*main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
*followed by a new line
*Return: Always 0
*/
int main(void)
{
long int i, n, p, s;
s = 1;
n = 2;
for (i = 0; i < 50; i++)
{
if (s != 20365011074)
{
printf("%ld, ", s);
}
else
{
printf("%ld\n", s);
}
p = n + s;
s = n;
n = p;
}
return (0);
}
