#include "main.h"
#include <stdio.h>
/**
 * _puts - this functions takes string pointer and prints it
 *
 * @str: string entering
 */
void _puts(char *str)
{
	int pos = 0;

	while (*(str + pos) != 0)
	{
		_putchar(str[pos]);
		pos++;
	}
	_putchar('\n');
}
