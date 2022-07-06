#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabets_x10
 *
 */
void print_alphabet_x10(void)
{
char c;
int i;

for (c = 97; c <= 122; c++)
{
_putchar(c);
}

for (i = 0; i <= 10; i++)
{
_putchar(i);
}
_putchar('\n');
}
