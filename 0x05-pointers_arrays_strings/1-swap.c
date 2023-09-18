#include "main"
/**
 * swap_int - swap values of two vars with each others
 *@a: first number
 *@b: second number
 *Return: 0 always
 */
void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
}
