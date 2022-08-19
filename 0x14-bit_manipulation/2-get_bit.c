#include "main.h"

/**
  *get_bit - returns the value of a bit at a given index
  *@n: number.
  *@index: index of bit.
  *Return: the value of bit at index or -1 if error occurred
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 64)
		return (-1);
	value = (n >> index) & 1;

	return (value);
}
