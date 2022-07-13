#include "main.h"

/**
*cap_string - capitalises all string
*@s: string parameter
*Return: capitalised string
*/
char *cap_string(char *s)
{
int n = 0, n1;
char mks[] = {32, 9, '\n', ':', '.', '!', '?', '"', '(', ')', '{', '}'};

while (s[n])
{
n1 = 0;
while (n1 < 13)
{
if ((n == 0 || s[n - 1] == mks[n]) && (s[n] >= 97 && s[n] <= 122))
s[n] = a[n] - 32;
n1++;
}
n++;
}
return (s);
}
