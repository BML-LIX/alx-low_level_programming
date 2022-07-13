#include "main.h"

/**
*leet - it encodes a string into 1337.
*@s: parameter
*Return: string
*/
char *leet(char *s)
{
int n = 0, n1 = 5, n2;
char en[5] = { 'A', 'E', 'O', 'T', 'L'};
char enc[5] = {'4', '3', '0', '7', '1'};

while (s[n])
{
n2 = 0;
while (n2 < n1)
{
if (s[n] == en[n2] || s[n] - 32 == en[n2])
s[n] = enc[n2];
n2++;
}
n++;
}
return (s);
}
