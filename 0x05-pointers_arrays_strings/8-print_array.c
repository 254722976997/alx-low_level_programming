#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * print_array - Print elements of a array
 * @a: array name.
 * @n: elements of the array.
 *
 * Return: Always void.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n ; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
=======
 * print_array - prints an array of integers
 * @a: pointer to the array
 * @n: Number of elements in the array to be printed
 *
 * Return: Always 0 (Succes)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

>>>>>>> 7966964f8ab85e8e3c4a88eaeef4a97506570c89
	printf("\n");
}
