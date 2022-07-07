#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: 0 (success)
 */
void print_numbers(void)
{
	char r = 0;

	while (r <= 9)
	{
		_putchar('0' + r);
		r++;
	}
	_putchar('\n');
}
