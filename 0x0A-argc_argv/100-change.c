#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the minimum number of coins to make change for any amount
*@argc: argc paramt
*@argv: an array of a command
*Return: 0
*/
int main(int argc, char *argv[])
{
int  n, res = 0, n1;
int  coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("%s\n", "Error");
return (1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("0\n");
return (0);
}
for (n1 = 0; n1 < 5 && n >= 0; n1++)
{
while (n >= coins[n1])
{
n -= coins[n1];
res++;
}
}
printf("%d/n", res);
return (0);
}
