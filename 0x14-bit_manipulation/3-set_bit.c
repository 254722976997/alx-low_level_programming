#include "main.h"

/**
* set_bit - sets bit to 1 at certain index.
* @n: number to change.
* @index: index which to set bit to 1
* Return: 1 if works, -1 if didn't
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int limit, dig;

	limit = (sizeof(unsigned long int) * 8) - 1;

	if (index > limit)
		return (-1);
	dig = 1 << index;
	*n = *n | dig;
	return (1);
}
