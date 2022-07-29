#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *array_range - allocates mem to arrays of integers
*@min: param 1
*@max: param 2
*Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
int *array, n, size;
if (min > max)
return (NULL);
size = max - min + 1;
array = (int *)malloc(sizeof(int *) * size);
if (array == NULL)
return (NULL);
for (n = 0; n < size; n++)
array[n] = min++;
return (array);
}
