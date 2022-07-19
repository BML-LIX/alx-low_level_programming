#include "main.h"

/**
*_strstr - locates a substring.
*@haystack: the string to search
*@needle: str to find
*Return: char val
*/
char *_strstr(char *haystack, char *needle)
{
int n = 0, n1 = 0;

while (haystack[n])
{
while (needle[n1])
{
if (haystack[n + n1] != needle[n1])
{
break;
}
n1++;
}
if (needle[n1] == '\0')
{
return (haystack + n);
}
n++;
}
return ('\0');

}
