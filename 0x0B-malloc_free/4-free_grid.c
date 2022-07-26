#include "main.h"
/**
*free_grid - removes memory allocation
*@grid: grid to be reduced
*@height: height of matrix
*Return: nothing
*/
void free_grid(int **grid, int height)
{
int n;

for (n = 0; n < height; n++)
free(grid[n]);
free(grid);
}
