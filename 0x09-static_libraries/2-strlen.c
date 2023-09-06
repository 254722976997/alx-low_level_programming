#include "main.h"
/**
 * _strlen - this function takes string pointer and returns
 * the lenght
 *
 * @s: pointer to string
 *
 * Return: number of indexes
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*(s + lenght) != 0)
	{
		lenght++;
	}

	return (lenght);
}
