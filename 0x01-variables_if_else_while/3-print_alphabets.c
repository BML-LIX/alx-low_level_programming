#include <stdio.h>

/**
 * main - prints  the alphabet in lowercase, and then in uppercase
 *  followed by a new line.
 * Return: always 0
 */
int main(void)
{
int alp;
for (alp = 97; alp <= 122; alp++) /*ascii codes for lowercase alphabet*/
{
putchar(alp);
}

for (alp = 65; alp <= 90; alp++) /*ascii codes for uppercase alphabets*/
{
putchar(alp);
}
putchar(10);

return (0);
}
