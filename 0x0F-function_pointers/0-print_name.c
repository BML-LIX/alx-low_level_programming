#include "function_pointers.h"

/**
*print_name - prints a name
*@name: string of a name
*@f: a function
*Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
