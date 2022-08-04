#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - print numbers followed by new line
 *@separator:string printed between numbers
 *@n: number of intergers passed to the function
 *Return: sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m = 0;
	va_list a;

	va_start(a, n);

	if (!separator)
		return;
	for (m = 0; m < n; m++)
	{
		printf("%d%s", va_arg(a, int), m != (n - 1) ? separator : "");
	}

	va_end(a);
	putchar('\n');
}
