#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 *  followed by a new line.
 * Return: always 0
 */
int main(void)
{
int num;
for (num = 48; num <= 57; num++)/*ascii code for digits in base 10*/
{
putchar(num);

}
putchar(10); /*ascii code for new line*/
return (0);
}
