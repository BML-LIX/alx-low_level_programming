#include "main.h"

/**
*_sqrt_recursion - prints sqrt of a given number
*@n: a number
*Return: sqr root of a number
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (sqrt(n, 0));
}

/**
*sqrt - recursive square root
*@num: number
*@i: recursion
*Return: a number
*/

int sqrt(int num, int i)
{
if ((i * i) == num)
{
    return (i);
}
else
{
    if ((i * i) > num)
    return (-1);
    else
    return (sqrt(num, i + 1));
}
}
