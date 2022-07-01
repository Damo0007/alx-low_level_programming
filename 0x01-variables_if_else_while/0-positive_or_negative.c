#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("is positive %d", n);
}
if (n == 0)
{
printf("\nis zero %d", n);
}
if (n < 0)
{
printf("\n is negative %d", n);
}
return (0);
}
