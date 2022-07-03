#include <stdio.h>

/**
 * main -prints all possible combinations of single-digit numbers.
 *Numbers must be separated by ,, followed by a space
*Numbers should be printed in ascending order
* Return: always 0
*/
int main(void)
{
int num;
for (num = 48; num <= 57; num++)/*ascii code for digits in base 10*/
{
putchar(num);
if (num != 57)
{
putchar(44);
putchar(32);
}

}
putchar(10); /*ascii code for new line*/
return (0);
}
