#include "main.h"

/**
<<<<<<< HEAD
 * swap_int - swap values of two integers.
 * @a: Variable 1.
 * @b: Variable 2.
 *
 *Return: Always void.
=======
 * swap_int - a function that swaps the value of two intergers
 * @a: pointer to integer 1
 * @b: pointer to integer 2
 *
 * Return: Void
>>>>>>> 7966964f8ab85e8e3c4a88eaeef4a97506570c89
 */
void swap_int(int *a, int *b)
{
	int swap;

<<<<<<< HEAD
	swap = *a;
	*a = *b;
	*b = swap;
=======
	swap = *b;
	*b = *a;
	*a = swap;
>>>>>>> 7966964f8ab85e8e3c4a88eaeef4a97506570c89
}
