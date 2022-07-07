#include "main.h"
/**
 * _isupper - checksfor uppercase characters
 * @c: is the int for the arguement of the function
 * Return: 1 if uppercase 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
