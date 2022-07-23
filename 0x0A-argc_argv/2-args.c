#include <stdio.h>

/**
*main- prints its number of command lines 
*@argc: argc parm
*@argv: an array of commands
*Return: 0 
*/
int main(int argc, char *argv[])
{
int n;

for (n = 0; n < argc; n++)
{
printf("%s\n", argv[n]);
}
return (0);
}
