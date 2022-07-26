#include "main.h"

/**
*_strdup -string duplicator
*@str: sting to be duplicated
*Return: a pointer to the space in memory
*/
char *_strdup(char *str)
{
int n = 1, n1 = 0;
char *s;

if (str == NULL)
return (NULL);
while (str[n])
n++;
s = (char *)malloc(n *sizeof(char) + 1);
if (s == NULL)
return (NULL);
while (n1 < n)
{
s[n1] = str[n1];
n1++;
}
s[n1] = '\0';
return (s);
}
