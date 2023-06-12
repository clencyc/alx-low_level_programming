#include "main.h"
/**
 * _islower - Checks if lower is lower case
 * @c: integer parameter to check
 * Description: Checks if char is lower case
 * Return: 0
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
