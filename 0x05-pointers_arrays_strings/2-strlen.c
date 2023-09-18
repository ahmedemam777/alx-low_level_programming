#include "main.h"
/**
 * _strlen - give length of string 
 * @s: string given
 * Return: 0 always
 */
int _strlen(char *s)
{
int i = 0;
 for (; *s++;)
{
i++;
}
return (i);
}
