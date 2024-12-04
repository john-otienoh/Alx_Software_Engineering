#include "main.h"
/**
 * prime - helper function to check for prime
 * @n: the number
 * @end: number divided by 2
 * @i: digit 2
 * Return: 0 or 1
 */
int prime(int n, int end, int i)
{
	if (n % i == 0)
		return (0);
	else if (i >= end)
		return (1);
	else
		return (prime(n, end, i + 1));
}

/**
 * is_prime_number - Function that checks if a number is prime
 * @n: The number to be checked if it is prime
 * Return: 1 if the input integer is prime, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (prime(n, n / 2, 2));
}
