#include "main.h"

/**
*is_prime_number - check prime numbers
*@n: int
*Return: 1 if prime otherwise 0
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else 
{
return (find_prime(n, 2));
}
}


/**
*find_prime - checks prime numbers
*@num: number
*@i: iterator ,possible factor
*Return: 0 or 1
*/
int find_prime(int num, int i)
{
if (i < num)
{
if (num % 1 == 0)
{
return (0);
}
else
{
    return (find_prime(num, i + 1));
}
}
else{
    return (1);
}
}



