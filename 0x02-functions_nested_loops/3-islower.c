#include "main.h"
/**
 * _islower - check if character gived in lower case 
 * @c: character to be checked
 * Return: give 1 in lowercase and 0 otherwise 
 */
int _islower(int c)
{
if ( c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
