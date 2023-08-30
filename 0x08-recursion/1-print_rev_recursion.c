#include "main.h"

/**
 * _print_rev_recursion - function that prints string in reverse mode.
 * @s: String literal print reverse.
 *
 * Return: Always void.
 */
void _print_rev_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		s--;
	}
	else
	{
		_print_rev_recursion(++s);
		s--;
		_putchar(*s);
	}
}
