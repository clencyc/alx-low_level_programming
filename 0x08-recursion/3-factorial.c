#include "main.h"
#include <stdio.h>

/**
 * factorial - factorial of a number
 * @n: the number we want to find the factorial for
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
