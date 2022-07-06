#include <stdio.h>

/**
*main- finds and prints the sum of the even-valued terms not exceeding 4m,
*followed by a new line.
*Return: Always 0
*/
int main(void)
{
long int i, n, p, s, sum;
s = 1;
n = 2;
sum = 0;
for (i = 0; i < 50; i++)
{
if ((s % 2) == 0 && s < 4000000)
{
sum = sum + s;
}
p = n + s;
s = n;
n = p;
}
printf("%ld\n", sum);

return (0);

}
