#include "main.h"

/**
*cap_string - capitalises all string
*@s: string parameter
*Return: capitalised string
*/
char *cap_string(char *s)
{
int n = 0;

while (s[++n])
{
while (!(s[n] >= 'a' && s[n] <= 'z'))
n++;
if (s[n - 1] == ' ' || s[n - 1] == ',' || s[n - 1] == '\t' ||
s[n - 1] == '\n' ||
s[n - 1] == ',' || s[n - 1] == ';' || s[n - 1] == '.'
|| s[n - 1] == '!' || s[n - 1] == '?' || s[n - 1] == '"' || s[n - 1] == '(' ||
s[n - 1] == ')' || s[n - 1] == '{' s[n - 1] == '}')
s[n] -= 32;
}
return (s);
}
