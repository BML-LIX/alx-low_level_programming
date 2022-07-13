#include "main.h"

/**
*reverse_array - reverse the content of an array of integers
*@a: array of type integer
*@n: number of element of the array
*Return: always 0
*/
void reverse_array(int *a, int n)
{
int n1, m;

for (n1 = 0; n1 < (n / 2); n1++)
{
m =a[n1];
a[n1] = a[n - n1 - 1];
a[n - n1 - 1] = m;
}
}