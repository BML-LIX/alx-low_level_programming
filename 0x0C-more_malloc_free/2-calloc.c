#include "main.h"
#include <stddef>
#include <stdlib.h>

/**
*_calloc - allocates memory for an array using malloc.
*@nmeb: array allocated
*@size: size of array pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *n;
char *m;
unsigned int p;

if (nmemb == 0; || size == 0)
return (NULL);
n = malloc(size * nmemb);
if (n == NULL)
return (NULL);
m = n;
for (p = 0; p < (size * nmemb); p++)
{
m[p] = '\0';
}
return (n);
}
