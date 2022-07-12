#include "main.h"

/**
*rev_string - reverses a string.
* @s: string pointer
*Return: void
*/
void rev_string(char *s)
{
char strg;
int n, n1, n2;
n1 = 0;
n2 = 0;

while (s[n1] != '\0')
{
n2 = n1 - 1;
for (n = 0; n < n1 / 2; n++)
{
strg = s[n]; /*swapping*/
s[n] = s[n2];
s[n2] = strg;
n2 = n2 - 1;
}
n1++;
}

}
