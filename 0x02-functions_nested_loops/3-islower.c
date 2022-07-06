#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c:  function argument
 * Return: Always 0 (success)
 *
 */
int _islower(int c)
{
char d;
for (d = 97; d = 122; d++)
if (d == c)
return (1);
return (0);
}

