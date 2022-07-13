#include "main.h"

/**
*_strcat - a function that concatenates two strings.
*@dest: a string pointer parameter 1
*@src: a string pinter 2
*Return: string dest.
*/
char *_strcat(char *dest, char *src)
{
int n, n1;

for (n = 0; dest[n] != '\0'; n++)
;
for (n1 = 0; src[n1] != '\0'; n1++)
{
dest[n] = src[n1];
n += 1;
}
dest[n] = '\0';
return (dest);
}
