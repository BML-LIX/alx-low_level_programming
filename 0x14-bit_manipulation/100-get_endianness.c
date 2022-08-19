#include "main.h"
/**
  *get_endianness - determines the endianness
  *Return: 0 big endian, 1 little endian.
  */
int get_endianness(void)
{
	unsigned int n = 0x7343211;

	char *m = (char *)&n;

	if (*m)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
