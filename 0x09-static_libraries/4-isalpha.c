#include "main.h"
/**
 * _isalpha - check if input is alohabetical character or not
 * @c: the c to be checked
 * Return: 1 if alphabet and 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
