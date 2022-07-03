#include <stdio.h>

/**
 * main -prints all possible different combinations of single-digit numbers.
 *Numbers must be separated by ,,
* followed by a space
* Return: always 0
*/
int main(void)
{
int num;
int j;
for (num= 48; num <= 57; num++)/*ascii code for digits in base 10*/
{
for (j= 49; j<= 57; j++)
{
if (n > num)
{
putchar(num);
putchar(n);

if (num != 56 || n !=57)
{
putchar(44);
putchar(32);
}
}

}
}

}
putchar(10); /*ascii code for new line*/
return (0);
}