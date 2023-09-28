#include "main.h"

/**
* binary_to_uint - converts binary string to an unsigned int.
* Return: converted number or 0 if null, non 0/1 in string.
* @b: string of binary to be converted
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i;

	if (!b)
		return (0);

	for (i = 0; *(b + i); i++)
	{
		n = n << 1;
		if (*(b + i) == '1')
			n = n | 1;
		else if (*(b + i) != '0')
		return (0);
		}
	return (n);
}
