#include "main.h"
#include <stdlib.h>

/**
*malloc_checked - allocates memory using malloc
*@b:parameter
*Return: a pointer to memory
*/
void *malloc_checked(unsigned int b)
{
void *n;

p = malloc(b);
if (n == NULL)
exit(98);
return (n);
}
