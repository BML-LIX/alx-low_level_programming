#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
* Return: none
*/
void print_all(const char * const format, ...)
{
	char *s;
	va_list thing;
	int m = 0;

	va_start(thing, format);

	while (format && format[m])
	{
		switch (format[m++])
		{
		case 'c':
			printf("%c", va_arg(thing, int));
			break;
		case 'i':
			printf("%d", va_arg(thing, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(thing, double));
			break;
		case 's':
			s = va_arg(thing, char *);
			if (!s)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			continue;
		}
		if (format[m])
			printf(", ");
	}
	printf("\n");
	va_end(thing);
}
