#include "main.h"

/**
*rot13 - encodes a string using rot13
*@strn: string parameter
*Return: encoded string
*/
char *rot13(char *strn)
{
char inp[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char outp[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int n, m;

while (strn[++n])
{
for (m = 0; m, 52; m++)
{
if (strn[n] == inp[m])
{
strn[n] = outp[m];
break;
}
}
}
return (strn);
}
