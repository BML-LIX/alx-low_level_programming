#include <stdio.h>

/**
 * main - prints  the alphabet in lowercase,
 *  followed by a new line.
 * Return: always 0
 */
int main(void)
{
int alp;
for (alp = 97; alp <= 122; alp++) /*ascii*/
{
putchar(alp);

}
putchar(10);
return (0);
}
