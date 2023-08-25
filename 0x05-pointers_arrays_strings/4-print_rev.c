#include "main.h"

/**
<<<<<<< HEAD
 * print_rev - Prints a string in reverse.
 * @s: Variable string.
 *
 * Return: Always void.
=======
 * print_rev - prints a string in reverse
 *
 * @s: pointer to the string being printed in reverse
 *
 * Return: Alwas 0.
>>>>>>> 7966964f8ab85e8e3c4a88eaeef4a97506570c89
 */
void print_rev(char *s)
{
	char *p;

	p = s;

	while (*s != '\0')
	{
		s++;
	}
	for (s = (s - 1) ; s >= p ; --s)
	{
		_putchar(*s);
	}
	_putchar(10);
}
