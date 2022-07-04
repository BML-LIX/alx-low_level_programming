#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * The two numbers should be separated by a space
 * Return: always 0
 */
int main(void)
{
int n1;
int n2;
int n3;
int n4;
for (n1 = 48; n1 <= 57; n1++)
{
for (n2 = 48; n2 <= 56; n2++)
{
for (n3 = 48; n3 <= 57; n3++)
{
for (n4 = 49; n4 <= 57; n4++)
{
if (n2 <= n1 && n3 >= n2 && n4 >= n3)
{
putchar(n1);
putchar(n2);
putchar(32);
putchar(n3);
putchar(n4);
if (n1 != 57 || n2 != 56 || n3 != 57 || n4 != 57)
{
putchar(44);
putchar(32);
}
}
}
}
}
}
return (0);

}
