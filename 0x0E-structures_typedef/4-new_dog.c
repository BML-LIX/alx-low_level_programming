#include <stdlib.h>
#include "dog.h"
/**
*new_dog - creates a new dog
*@name: parm 1
*@age:param2
*@owner: param3
*Return: null if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int n1, m, p;

struct dog *n_dog = NULL;
m = 0;
while (name[m] != '\0')
m++;
p = 0;
while (owner[p] != '\0')
p++;
n_dog = malloc(sizeof(struct dog));
if (n_dog == NULL)
{
free(n_dog);
return (NULL);
}
n_dog->name = malloc(m + 1);
if (n_dog->name == NULL)
{
free(n_dog->name);
free(n_dog);
return (NULL);
}
n_dog->owner = malloc(p + 1);
if (n_dog->owner == NULL)
{
free(n_dog->name);
free(n_dog->owner);
free(n_dog);
return (NULL);
}
for (n1 = 0; n1 <= m; n1++)
n_dog->name[n1] = name[n1];
for (n1 = 0; n1 <= p; n1++)
n_dog->owner[n1] = owner[n1];
n_dog->age = age;
return (n_dog);
}
