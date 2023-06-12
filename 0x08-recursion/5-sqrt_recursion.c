#include "main.h"
#include "stdio.h"

/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n:number to calculate the squareroot
 *
 * Return: the resulting square root
 *
 */
int _sqrt_recursion(int n)
{
	int result;
	
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);

	result = _sqrt_recursion(n / 4) * 2;
	if ((result + 1) * (result + 1) <= n)
		return (result + 1);
	return (result);
}
