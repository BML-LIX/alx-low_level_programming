#include "main.h"

/**
 *print_chessboard -prints the chessboard.
 *@a: arrays
 */
void print_chessboard(char (*a)[8])
{
int n, n1;

for (n = 0; n < 8; n++)
{
for (n1 = 0; n1 < 8; n1++)
{
_putchar(a[n][n1]);
}
_putchar('\n');
}
}
