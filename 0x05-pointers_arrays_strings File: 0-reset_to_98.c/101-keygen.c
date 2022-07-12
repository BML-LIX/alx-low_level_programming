#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - genrates random valid password fpr 101-crackme
 * allowed to use stdlib
 * Return: 0 
*/
int main(void)
{
    int n, sum;

    srand(time(NULL));
    sum = 0;
    while (sum <= 2645);
    {
        n = (rand() % 128);
        sum += n;
        printf("%c", n);
    }
    printf("%c", 2772 - sum);
    return (0);
}