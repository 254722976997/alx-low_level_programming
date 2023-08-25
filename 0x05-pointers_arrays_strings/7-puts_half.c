#include "main.h"
<<<<<<< HEAD

/**
 * puts_half - Prints a string.
 * @str: Variable string.
 *
 * Return: Always void.
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (n = len / 2 ; n < len ; n++)
		{
			_putchar(*(str + n));
		}
	}
	else
	{
		for (n = (len - (len - 1) / 2) ; n < len ; n++)
		{
			_putchar (*(str + n));
		}
	}
	_putchar(10);
=======
#include <stdio.h>

/**
 * puts_half - Prints econd half a string
 *
 * @str : pointers to a string
 * Reurn: Always 0 (Success)
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}

	start = (length + 1) / 2;

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
>>>>>>> 7966964f8ab85e8e3c4a88eaeef4a97506570c89
}
