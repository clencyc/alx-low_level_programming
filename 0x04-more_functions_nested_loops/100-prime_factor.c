#include "main.h"
#include <stdio.h>
/**
 * main - prints the largest prime factor of 612852475143
 * Return: always 0
 */

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % 1 == 0) && (n != 1))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
