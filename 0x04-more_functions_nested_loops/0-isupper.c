#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to be checked
 *
 * Return: 0 for anything else or 1 for uppercase character
 */
int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
