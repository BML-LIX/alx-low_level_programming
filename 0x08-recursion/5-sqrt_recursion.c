#include "main.h"

int _sqr(int, int)
/**
*_sqrt_recursion - prints sqrt of a given number
*@n: a number
*Return: sqr root of a number
*/
int _sqrt_recursion(int n)
{
return (sqr(n, 1));
}

/**
*_sqr - recursive square root
*@n :number
*@i : recursion
*Return: a number
*/

int _sqr(int n, int i)
{
int sq = i * i;

if (sq > n)
return (-1);

if (sq == n)
return (i);
return (_sqrt_recursion(n, i + 1));
}
