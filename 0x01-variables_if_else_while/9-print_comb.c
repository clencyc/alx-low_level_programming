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
int i;
i = 0;
while (i < 10)
{
putchar(48 + i);
if (i < 9)
{
putchar(',');
putchar(' ');
}
++i;
}
putchar('\n');
return (0);
}
