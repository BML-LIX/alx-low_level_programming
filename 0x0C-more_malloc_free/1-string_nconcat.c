#include "main.h"
#include <stdlib.h>

/**
*string_nconct - conctenates two strings
*@s1: string param 1
*@s2: string param 2
*@n: param 3
*Return: a string pointer
*/
char *string_nconct(char *s1, char *s2, unsigned int n)
{
char *conct;
unsigned int length = n, m;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (m = 0; s1[m]; m++)
length++;

conct = malloc(sizeof(char) * (length + 1));

if (conct == NULL)
return (NULL);

length = 0;

for (m = 0; s1[m]; m++)
conct[length++] = s1[m];

for (m = 0; s2[m] && m < n; m++)
conct[length++] = s2[m];

conct[length] = '\0';

return (conct);
}
