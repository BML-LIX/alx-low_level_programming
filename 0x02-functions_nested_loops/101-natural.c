#include <stdio.h>

/**
*main - prints the sum of multiples of 3 or 5
*followed by a new line
*Return: Always 0 .
*/
int main(void)
{
int n;
int p;
unsigned long int s,s3,s5;

s = 0;
s3 = 0;
s5 = 0;

for (n =0; n < 1024; n++)
{
if ((n % 3) == 0)
{
s3 += n;
}
else if ((n % 5) == 0)
{
s5 += n;
}

}
s = s3 + s5;
printf("%lu\n", s);
return (0);
}
