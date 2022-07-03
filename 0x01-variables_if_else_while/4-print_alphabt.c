#include <stdio.h>

/**
 * main - prints  the alphabet in lowercase,
 *  followed by a new line.
 * Return: always 0
 */
int main(void)
{
int alp;
for (alp = 97; alp <= 122; alp++) /*asciicode for lower alphabets*/
{
if (alp != 101 && alp != 113)
{
putchar(alp);
}

}
putchar(10);

return (0);
}
