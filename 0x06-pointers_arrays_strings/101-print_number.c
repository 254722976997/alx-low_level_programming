#include "main.h"
/**
**print_number - [ronts an integer
*@n: - pointer to the integer to be printed
*
* Return: Always 0.
*/
void print_number(int n)
{
	unsigned int num = 0;

	if (n < 0)
	{
		_putchar('-');

		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 100);

	_putchar((num % 10) + '0');
}
