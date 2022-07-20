#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: is the string to be printed out
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar(' ');
			return;
	}
	if (*s > 0)
	{
		_putchar(*s);
		return;
	}
		_puts_recursion(s + 1);
}
