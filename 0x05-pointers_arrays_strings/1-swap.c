#include "main.h"

/**
 * swap_int - a function that swaps the value of two intergers
 * @a: pointer to integer 1
 * @b: pointer to integer 2
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
