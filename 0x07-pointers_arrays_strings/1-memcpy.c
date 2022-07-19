#include "main.h"

/**
*_memcpy - copies memory area.
*@dest: destination mem
*@src:  source mem
*@n: number of bytes to be copied
*Return:string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int n1;

for (n1 = 0; n1 < n; n1++)
dest[n1]  = src[n1];
return (dest);
}
