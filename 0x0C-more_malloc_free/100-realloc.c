#include "main.h"
#include <stdlib.h>

/**
*_realloc - Reallocates a nory block using malloc and free.
*@ptr: A pointer to the nory previously allocated.
*@old_size: allocated space for ptr.
*@new_size: size for the new nory block.
*Return: If new_size == old_size - ptr.
*If new_size == 0 and ptr is not NULL - NULL.
*Otherwise - a pointer to the reallocated nory block.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *n;
char *m;
char *mfill;
unsigned int mi;

if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
n = malloc(new_size);

if (n == NULL)
return (NULL);
return (n);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

m = ptr;
n = malloc(sizeof(*m) * new_size);

if (n == NULL)
{
free(ptr);
return (NULL);
}

mfill = n;

for (mi = 0; mi < old_size && mi < new_size; mi++)
mfill[mi] = *m++;
free(ptr);
return (n);
}
