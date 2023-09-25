#include "main.h"
/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @b
 * @n: bytes of mem area pointed to by @b
 * @s: with the constant byte @b
 * @b: memory area pointer
 * Return: a pointer to memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
