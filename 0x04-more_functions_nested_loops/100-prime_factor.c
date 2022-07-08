#include <stdio.h>
#include <math.h>

/**
*main - finds and prints the largest prime factor of the number 612852475143
*followed by a new line
*Return: Always 0 (Success)
*/
int main(void)
{
long int n;
long int n1;
long int mxm;

n1 = 612852475143;
mxm = -1;

while (n1 % 2 == 0)
{
n1 /= 2;
mxm = 2;
}

for (n = 3; n <= sqrt(n1); n = n + 2)
{
while (n1 % n == 0)
{
mxm = n;
n1 = n1 / n;
}
}

if (n1 > 2)
mxm = n1;

printf("%ld\n", mxm);

return (0);
}
