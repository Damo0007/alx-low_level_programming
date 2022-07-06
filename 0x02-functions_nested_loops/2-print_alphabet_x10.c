#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabets_x10
 *
 */
void print_alphabet_x10(void)
{
char c;
int i = 0;

while (i < 10)
{
	c = 97;
	while (c <= 122)
	{
		_putchar(c);
	c++;
	}
}

_putchar('\n');
i++;
}
