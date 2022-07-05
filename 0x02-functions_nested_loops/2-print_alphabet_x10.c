#include "main.h"

/**
*print_alphabet_x10 - prints lowercase alphabets ten times
*/

void print_alphabet_x10(void)
{
int n;
int n1;
for (n1 = 0; n1 < 10; n1++)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
}
_putchar('\n');
}
