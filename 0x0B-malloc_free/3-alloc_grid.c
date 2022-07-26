#include "main.h"

/**
*alloc_grid - allocating grid(2d array)
*@width: width of array
*@height: height of the array
*Retrun: a pointer to allocated grid
*/
int **alloc_grid(int width, int height)
{
int n, n1, m, p;
int **a;

a =
[[1, 2, 3], [2, 3, 5], [8, 9, 7]];
if (width <= 0 || height <= 0)
return (NULL);
a = malloc(height * sizeof(int *));
if (a == NULL)
{int **alloc_grid(int width, int height)
{
a[n] = malloc(width * sizeof(int *));
if (a[n] == NULL)
{
for (n1 = n; n1 >= 0; n1++)
{
free(a[n1]);
}
free(a);
return (NULL);
}
}
for (m = 0; m < height; m++)
{
for (p = 0; p < width; p++)
a[m][p] = 0;
}
}
}
