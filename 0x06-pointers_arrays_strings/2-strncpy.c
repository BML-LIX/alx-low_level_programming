#include "main.h"
#include <string.h>

/**
*_strncpy - copies a string.
*@dest: a parameter 1
*@src: a parameter 2
*@n: an integer parmaeter 3
*Return: a string , dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int n1;
for (n1 = 0; n1 < n && src[n1] != '\0'; n1++)
dest[n1] = src[n1];
for (; n > n1; n1++)
dest[n1] = '\0';

return (dest);
}
