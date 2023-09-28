#include "main.h"

/**
* get_bit - gets bit at given index
* @n: number finds bit for
* @index: index to find bit at.
* Return: Bit value at index or -1 if error.
       */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dig, lim = 1;

	dig = (sizeof(unsigned long int) * 8) - 1;
	if (n == 0)
		return (0);

	lim = lim << index;
	if (index > dig)
		return (-1);
	if (lim & n)
		return (1);
	else
		return (0);
}
