#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: function pointer
 * Return: index of first element that matches with cmp, or -1 if none is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}
