#include "main.h"

/**
*rot13 - encodes a string using rot13
*@strn: string parameter
*Return: encoded string
*/
char *rot13(char *strn)
{
char inp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char outp[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int n, m;

for (n = 0; strn[n] != '\0' || strn[n] != '\0'; n++)
{
for (m = 0; inp[m] != '\0'; m++)
{
if (strn[n] == inp[m])
{
strn[n] = outp[m];
break;
}
}
return (strn);
}

}
