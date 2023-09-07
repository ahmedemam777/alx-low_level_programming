#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
char b;
float c;
long int d;
long long int f;
printf("size of int is %d", sizeof(a));
printf("size of char is %s", sizeof(b));
printf("size of float is %f", sizeof(c));
printf("size of long int is %lu", sizeof(d));
printf("size of long long int is %lu", sizeof(f));
return (0);
}
