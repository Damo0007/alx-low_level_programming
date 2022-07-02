#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 *
 **/

int main(void)

{

int n, m, l;
for (n = 45; n < 55; n++)

{

for (m = 46; m < 55; m++)

{

for (l = 47; l < 55; l++)
{

if (l > m && m > n)
{

putchar(n);
putchar(m);
putchar(l);

if (n != 50 || m != 51)
{
putchar(',');

putchar(' ');

}

}

}

}

}
putchar('\n');
return (0);
}
