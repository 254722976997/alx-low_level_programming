#include "main.h"

/**
* get_endianness - checks endianness
*
* Return: void.
*/
int get_endianness(void)
{
	int test = 256;
	void *i = &test;

	if ((*((char *)i + 1) & 1) != 0)
		return (1);
	else
		return (0);
	return (1);
}
