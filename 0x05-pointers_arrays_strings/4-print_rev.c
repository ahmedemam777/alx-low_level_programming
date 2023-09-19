#include "main.h"
/**
 * print_rev - print string in reverse direction
 * @s: string to be reversed
 * Return: 0 always
 */
void print_rev(char *s)
{
int x, i;
while(s[x] != '\0')
{
x++;
}
for (i = x-1; i >=0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
