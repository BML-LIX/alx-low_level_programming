#include "main.h"

/**
*str_concat - concatinates strings
*@s1: string 1
*@s2: string 2
*Return: s1 +s2
*/
char *str_concat(char *s1, char *s2)
{
int n = 0, n1 = 0, l = 0, m = 0;
char *s;

if (s1 == NULL)
s1 = "";
if (s2 = NULL)
s2 = "";
while (s1[n])
n++;
while (s2[n1])
n1++;

l = n + n1;
s = (char *)malloc(l* sizeof(char) + 1)
if (s == NULL)
return (NULL);
n1 = 0;
while (m < l)
{
if (m < n)
s[m] = s1[m];
if (m >= n)
{
s[m] = s2[n1];
n1++;
}
m++;
}
s[m] = '\0';
return (s);
}
