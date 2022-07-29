#include "main.h"
#include <stddef>
#include <stdlib.h>

/**
*string_nconcat - concatenates two strings
*@s1: string param 1
*@s2: string param 2
*@n: param 3
*Return: a string pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int leng ; m;
char *conct;

leng = n;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (m = 0; s1[m]; m++)
leng++;
conct = (char *)malloc(sizeof(char) * leng + 1)
if (conct == NULL)
return (NULL);
leng = 0;
for (m = 0; s1[m]; m++)
conct[leng++] = si[m]
for (m = 0; s2[m] && m < n; m++)
conct[leng++] = s2[m];

conct[leng] = '\0';
return (conct);
}
