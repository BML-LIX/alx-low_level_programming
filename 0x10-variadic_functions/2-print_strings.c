#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print all argument
 * @separator: item to use ot separate numbers
 * @n: number of argument to sum
 * Return: sum of all argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int m = 0;
	char *c;

	va_list a;

	va_start(a, n);

	if (!separator)
		return;
	for (m = 0; m < n; m++)
	{
		c =  va_arg(a,  char*);
		printf("%s%s", c == NULL ? "(nil)" : c, m != (n - 1) ? separator : "");
	}
	va_end(a);
	putchar('\n');

}

