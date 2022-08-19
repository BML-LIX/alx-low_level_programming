#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: the first bit
 * @m: the second bit
 * Return: the number of bit for flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shift = (sizeof(n) * BYTE_LENGHT);
	int num_flip = 0;

	while (shift--)
		num_flip += (n >> shift & 1) != (m >> shift & 1);
	return (num_flip);
}
