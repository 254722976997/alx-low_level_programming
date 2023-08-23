#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: pointer to the string being printed in reverse
 *
 * Return: Alwas 0.
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
