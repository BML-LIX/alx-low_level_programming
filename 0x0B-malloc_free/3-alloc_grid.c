#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - allocating grid(2d array)
*@width: width of array
*@height: height of the array
*Return: a pointer to allocated grid
*/
int **alloc_grid(int width, int height)
{
int n, n1, m, p;
int **a;

if (width <= 0 || height <= 0)
{
return (NULL);
}
else
{
a = (int **)malloc(height * sizeof(int *));/*malloc per pointer*/
if (!a)
{
free(a);
return (NULL);
}
for (n = 0; n < height; n++)
{
a[n] = (int *)malloc(width * sizeof(int));
if (!a[n])
{
for (n1 = 0; n1 <= n; n1++)
free(a[n1]);
free(a);
return (NULL);
}
}
for (m = 0; m < height; m++)
{
for (p = 0; p < width; p++)
{
a[m][p] = 0;
}
}
return (a);
}
}
