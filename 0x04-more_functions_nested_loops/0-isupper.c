#include <ctype.h>
#include "main.h"
#include <stdio.h>
/**
 * _isupper - uppercase letters
 * 0c: char to check
 *
 * Return: 0 or 1
 */
int isupper(int c);
{
	if (c >= 'A' && c<= 'Z')
		return (1);
	else
		return (0);
}	
