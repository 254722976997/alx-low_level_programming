#include "main.h"

/**
<<<<<<< HEAD
 * _puts - Prints a string.
 * @str: Variable string.
 *
 * Return: Always void.
 */
void _puts(char *str)
{

=======
 * _puts - prints a string
 *
 * @str: pointer to the sring to be printed
 *
 * Return: Void
 */
void _puts(char *str)
{
>>>>>>> 7966964f8ab85e8e3c4a88eaeef4a97506570c89
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
