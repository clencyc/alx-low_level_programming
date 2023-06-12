#include "main.h"
#include <stdio.h>

/**
 * isprime - helper function for is_prime_number
 * @n: input number
 * @i: iterator
 *
 * Return: 0 if false 1 if true
 */

int isprime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (isprime(n, i - 1));
}

/**
 * is_prime_number - to check if the number is prime
 * @n: number to be checked
 *
 * Return: 0 if false 1 if true
 */

int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (isprime(n, n - 1));
}
