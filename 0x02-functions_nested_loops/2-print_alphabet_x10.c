#include "main.h"
/**
 * print_alphabet_x10 - in lower case followed by new line
 */

void print_alphabet_x10(void)
{
char letter;
int x = 0;
while (x < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
x++;
}
}
