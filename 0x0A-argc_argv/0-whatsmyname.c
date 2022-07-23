#include <stdio.h>

/**
 *main- prints its name
 *@argc: argc parm
 *@argv: an array of commands
 *Return: 0 
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    printf("%s/n", *argv);
    return (0);
}