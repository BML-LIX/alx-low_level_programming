#include "main.h"
#include <string.h>

/**
*_strncat -  concatenates two strings.
*@dest: a string parameter 1
*@src: a string parameter2
*@n: an interger parametr 3
*Return: a string ,dest
*/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
