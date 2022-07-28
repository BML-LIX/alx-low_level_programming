#include "main.h"
#include <stdlib.h>

/**
 *argstostr - concatenates all arguments of the program
 *@ac:argmnt count
 *@av:pointer to arr of size ac  
 *Return: Null if ac == 0 or av == NULL 
 *NULL on fail.
 */
char *argstostr(int ac, char **av)
{
int i, j, k, size;
char *nargs;

size = 0;
k = 0;
if(ac == 0 || av == NULL)
return (NULL);
i = 0;
while (i < ac)
{
    j = 0;
    while (av[i][j])
    {
        size++;
        j++;     
    }
    size++;
    i++;
}
nargs = malloc((sizeof(char) * size) + 1);
if (nargs == NULL)
return (NULL);
i = 0;
while (i < ac)
{
    j = 0;
    while (av[i][j])
    {
        nargs[k] = av[i][j];
        j++;
        k++;
    }
    nargs[k] = '\n';
    k++;
    i++;
}
nargs[k] = '\n';
return (nargs);
}