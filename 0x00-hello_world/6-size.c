#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly,non-zero otherwise
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(charType));
printf("Size of an int: %d byte(s)\n", sizeof(intType));
printf("Size of a long long int: %d byte(s)\n", sizeof(longlongintType));
printf("Size of a float: %d byte(s)\n", sizeof(floatType));
return (0);
}
