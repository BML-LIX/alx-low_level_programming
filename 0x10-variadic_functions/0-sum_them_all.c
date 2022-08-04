#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - sum all argument
 *@n: number of argument to sum
 *Return: sum of all argument
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int m = 0;
	int sum = 0;

	va_list a;

	va_start(a, n);

	if (!n)
		return (0);
	for (m = 0; m < n; m++)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}

