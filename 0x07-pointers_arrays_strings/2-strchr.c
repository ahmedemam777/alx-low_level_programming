#include "main.h"
/**
 * _strchr - search for a character in string 
 * @c: the character to be searched
 * @s: string whiched searched
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
{
s++;
}
else
{
return (s);
}
if (c == '\0')
{
return (s);
}
return (Null);
}
