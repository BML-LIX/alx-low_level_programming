#include "main.h"

int find_prime(int, int)
/**
*is_prime_number - check prime numbers
*@n: int
*Return: 1 if prime otherwise 0
*/
int is_prime_number(int n)
{
return (find_prime(n, 1));
}


/**
*_prime - checks prime numbers
*@n: number
*@i: iterator
*Return: 0 or 1
*/
int find_prime(int n, int i)
{
if (n <= 1)
return (0);

if (n % i == 0 && i > 1)
return (0);
if ((n / i) < i)
return (1);
return (find_prime(n, i + 1));

}
