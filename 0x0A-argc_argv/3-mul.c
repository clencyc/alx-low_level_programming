#include "stdio.h"
#include "stdlib.h"

/**
 * main - multiply 2 numbers
 * @argc: number of command line arguments
 * @argv: pointer to the command line arguments
 * Return: 0 if success else 1
 */

int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc != 3)
	{
		printf("%s", "Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%d\n", x * y);

	return (0);
}

