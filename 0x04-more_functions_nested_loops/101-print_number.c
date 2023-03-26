#include "main.h"
/**
 * print_number - print numbers using just -putchar function.
 * @n: - the integer that we need to display.
 * return: Nothing just print.
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -1;
	}
	if (n / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
