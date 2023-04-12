#include "stdio.h"


/**
 * main - add passed numbers
 * @argc: number of command line arguments
 * @argv: pointer to the command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 0;
	int current;
	char *ptr[5];

	for (i = 1; i < argc; i++)
	{
		current = atol(argv[i], ptr, 10);
		if (**ptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		result += current;
	}
	printf("%d\n", result);
	return (0);
}

