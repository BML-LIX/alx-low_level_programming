#include "main.h"
#include <string.h>

/**
*puts2 -  prints every other character of a string,
* starting with the first character,
*followed by a new line.
*@str: parameter holding a string
*/
void puts2(char *str)
{
int n, len;
len = strlen(str);
for (n = 0; i < len; n += 2)
{
_putchar(str[n]);
}
_putchar('\n');
}
