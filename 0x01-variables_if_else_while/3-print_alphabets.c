#include <stdio.h>
/*
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
*/
void main(void)
{
          char x;
          for(x = 'a'; x <= 'z'; x++)
              putchar(x);

          for(x = 'A'; x <= 'Z'; x++)
              putchar(x);

          putchar("\n");

          return (0);        
}