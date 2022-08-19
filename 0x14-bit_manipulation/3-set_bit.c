#include  "main.h"

/**
  *set_bit - sets the value of a bit to 1 at a given index.
  *@n: pointer to number.
  *@index: index of bit.
  *Returns: 1 if it worked, or -1 if an error occurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n && index < 64)
	{
		*n += power(2, index);
	}
	else
	{
		return (-1);
	}
	return (1);
}


/**
  *power - returns the value of x to power of y.
  *@x: number.
  *@y: power.
  *Return: x to the power of y.
  */
int power(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * power(x, y - 1));
}
