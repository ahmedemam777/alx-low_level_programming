#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers from 0 to 9
 * Return: always 0
 */


void print_numbers(void)
{
char x;
for (x = '0'; x <= '9'; x++)
{
_putchar(x);
} 
_putchar('\n');

}
