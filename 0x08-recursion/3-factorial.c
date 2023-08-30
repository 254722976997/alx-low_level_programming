#include "main.h"

/**
 * factorial - function that return the string length.
 * @n: integer factorial.
 *
 * Return: factorial number.
 */
int factorial(int n)
{
	/* base case */
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
