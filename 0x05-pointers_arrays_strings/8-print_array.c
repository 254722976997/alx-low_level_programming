#include "main.h"
#include <stdio.h>

/**
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

	printf("\n");
}
