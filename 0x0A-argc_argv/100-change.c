#include "stdio.h"
#include "stdlib.h"

/**
 * main - counts minimum coins needed for the passed cents
 * @argc: number of command line arguments
 * @argv: pointer to the command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int coin_values[5] = {25, 10, 5, 2, 1 };
	int count = 0;
	int i;
	int value;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if (cents == 0)
			break;
		value = coin_values[i];
		if (cents < value)
			continue;
		count += cents / value;
		cents = cents % value;
		if (cents == 0)
			break;
	}
	printf("%d\n", count);
	return (0);
}
