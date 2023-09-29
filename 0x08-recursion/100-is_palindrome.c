#include "main.h"
/**
 * _strlen_recursion - print length of string
 * @s: string 
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
if (s[0] != '\0')
return (1 + _strlen_recursion(s + 1));
return (0);
}
/**
 * pal_checker - check if string is palindrom or not
 * @i: left index
 * @x: right index
 * @s: string 
 * Return: 1 if palindrom 0 if not
 */
int pal_checker(char *s, int i, int x)
{
if (s[i] == s[x])
if (i > x / 2)
return (1);
else
return (pal_checker(s, i + 1, x - 1));
else
return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
