#include "main.h"
/**
 * main - Entry point
 * Description: prints _putchar.
 * Return: 0
 */
int main(void)
{
int i;
char word[10] = "_putchar";
for (i = 0; word[i] != 0; i++)
{
_putchar(word[i]);
}
_putchar('\n');
return (0);
}

