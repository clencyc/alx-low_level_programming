#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Generates a random number and
 * specifies whether the generated
 * number is greater than 5, less than 6 or 0
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
