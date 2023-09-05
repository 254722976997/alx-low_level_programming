#include "main.h"
#include <stdio.h>

/**
 * _isupper - check upper char.
 * @c: a char argument
 *
 *Return: 1 if c is uppercase. 0 otherwise.
 */
int _isupper(int c)
{
	int uppercase;

	if (c > 64 && c < 91)
	{
		uppercase = 1;
	}
	else
	{
		uppercase = 0;
	}
	return (uppercase);
}
