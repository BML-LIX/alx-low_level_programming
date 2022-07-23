#include <stdio.h>

/**
*main- prints its number of command lines
*@argc: argc parm
*@argv: an array of commands
*Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
