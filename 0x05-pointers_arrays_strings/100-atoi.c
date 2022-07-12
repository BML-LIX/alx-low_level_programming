#include "main.h"

/**
*_atoi - converts a string to an integer
* @s: a pointer to charcter string
*
* Return: 0
*/
int _atoi(char *s)
{
int n1;
unsigned int num;
num = 0;
n1 = 1;
while (*s != '\0' && (*s < '0' || *s > '9'))
{
if (*s == '-')
{
n1 *= -1;
}
s++;
}
if (*s != '\0')
{
do {
num = num * 10 + (*s - '0');
s++;
} while (*s >= '0' && *s <= '9');
}
return (num *n1);
}
