#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - determines if a number is a prime number
 * @n: number to be tested
 * Return: returns 1 if the input integer is prime
 * otherwise returns 0 if the number is not prime
 *
 */

int is_prime_number(int n)
{
	int _is_prime = 0;

	if (n < 2)
		_is_prime = 0;
	else if (n == 2)
		_is_prime = 1;
	else if (n % 2 == 1)
		_is_prime = 1;

	return (_is_prime);
}
