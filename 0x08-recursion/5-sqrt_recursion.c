#include "main.h"
#include <stdio.h>

/**
 * number - helps find the squareroot of natural squareroots
 * @n: natural number starting from 1
 * @root: sqyareroot number to be found
 *
 * Return: squareroot of answer
 * if root is not a natural squareroot returns -1
 * if root is less than 0 return -1
 */
int number(int n, int root)
{
	if (n * n == root)
		return (root);
	if (n == root)
		return (-1);
	return (1 * number(n + 1, root));
}
/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n:number to calculate the squareroot
 *
 * Return: the resulting square root
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}

