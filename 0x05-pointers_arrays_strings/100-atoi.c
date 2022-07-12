#include "main.h"

/**
*_atoi - converts a string to an integer
* @s: a pointer to charcter string
*
* Return: 0
*/
int _atoi(char *s)
{
char *n;
int n1;
unsigned int num;
while (*n != '\0' && (*n < '0' || *n > '9'))
{
if (*n == '-')
{
n1 *= -1;
}
}
if (*n != '\0')
{
do {
num = num * 10 + (*n - '0');
n++;
} while (*n >= '0' && *n <= '9');
}
return (num * n1);
}
