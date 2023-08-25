#include "main.h"

/**
<<<<<<< HEAD
 * puts2 - Prints a string.
 * @str: Variable string.
 *
 * Return: Always void.
 */
void puts2(char *str)
{
	int len, n;
	char ch, *count;

	len = 0;
	count = str;
	while (*count != '\0')
	{
		count++;
		len++;
	}
	for (n = 0 ; n < len ; n++)
	{
		if (n % 2 == 0)
		{
			ch = *(str + n);
			_putchar(ch);
		}
	}
	_putchar(10);
=======
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
>>>>>>> 7966964f8ab85e8e3c4a88eaeef4a97506570c89
}
