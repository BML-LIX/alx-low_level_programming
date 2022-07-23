#include <stdio.h>
#include <stdlib.h>

/**
*main- adds positive numbers
*@argc: argc parm
*@argv: an array of commands
*Return: 0
*/
int main(int argc, char *argv[])
{
int res = 0, n, n1, n2, n3;

for (n = 1; n < argc; n++)
{
for (n1 = 0; argv[n][n1] != '\0'; n1++)
{
if (argv[n][n1] > '9' || argv[n][n1] < '0')
{
printf("%s\n", "Error");
return (1);
}
}
}
for (n2 = 1; n2 < argc; n2++)
{
n3 = atoi(argv[n2]);
res += n3;
}
printf("%d\n", res);
return (0);
}

