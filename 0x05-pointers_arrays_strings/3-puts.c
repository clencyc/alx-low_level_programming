#include <unistd.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: the string to print.
 *
 * Return: void.
 */
void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	write(STDOUT_FILENO, str, len);
	write(STDOUT_FILENO, "\n", 1);
}
