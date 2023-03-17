
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
int n;
int last;
char *desc;
srand(time(0));
n = rand() - RAND_MAX / 2;
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last == 0)
{
desc = "and is 0";
}
else if (last > 5)
{
desc = "and is greater than 5";
}
else if (last < 6)
{
desc = "and is less than 6 and not 0";
}
printf("Last digit of %d is %d %s\n", n, last, desc);
return (0);
}
