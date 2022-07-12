#include "main.h"
/**
 * swap_int - swaps value of two integers
 * @a : is an int
 * @b : is an int
 * Return : no return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
