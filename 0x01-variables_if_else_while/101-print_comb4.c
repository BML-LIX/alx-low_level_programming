#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Print only the smallest combination of three digits .
 * Numbers should be printed in ascending order, with three digits
 * Return: always 0
 */
int main(void)
{
int n1;
int n2;
int n3;

for (n1 = 48; n1 <= 57; n1++)
{
for (n2 = 49; n2 <= 57; n2++)
{
for (n3 = 50; n3 <= 57; n3++)
{
if (n2 > n1 && n3 > n2)
{
putchar(n1);
putchar(n2);
putchar(n3);
if (n1 != 55 || n2 != 56 || n3 != 57)
{
putchar(44);
putchar(32);
}
}
}
}
}
return (0);

}
