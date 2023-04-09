#include "string.h"

/**
 * _is_palindrome - helper function to check if string is palindrome
 * @s: the string to check
 * @i: first index yo compare
 * @j: second index to compare
 * Return: 1 if palindrome else 0
 */
int _is_palindrome(char *s, int i, int j)
{
	if (s[i] != s[j])
	{
		return (0);
	}
	if (i >= j)
	{
		return (1);
	}
	return (_is_palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks whether a string is palindrome
 * @s: the string to check
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	size_t length = strlen(s);

	if (length == 0)
		return (0);

	return (_is_palindrome(s, 0, length - 1));
}
