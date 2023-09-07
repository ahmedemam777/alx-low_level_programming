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
printf("size is %d", sizeof(a));
printf("size is %s", sizeof(b));
printf("size is %f", sizeof(c));
printf("size is %lu", sizeof(d));
printf("size is %lu", sizeof(f));
return (0);
}
