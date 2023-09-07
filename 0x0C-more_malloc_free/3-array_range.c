#include "main.h"
#include <stdlib.h>

/**
* array_range - Function that allocates memory for array of integers.
* @min: min elements of array.
* @max: max element of array.
*
* Return: pointer with memory location of array.
*/
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i;
	unsigned int j = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min ; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
