#include "main.h"

/**
 * puts2 - prints every character f a string
 *
 * @str: Pointer to the string
 * Return: Void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
