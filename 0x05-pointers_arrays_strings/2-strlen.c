#include "main.h"

/**
<<<<<<< HEAD
 * _strlen - Count the numbers of characters in a string.
 * @p: Variable string.
 *
 *Return: Always void.
 */
int _strlen(char *p)
{
	int n = 0;

	while (*p != '\0')
	{
		n++;
		p++;
	}
	return (n);
=======
 * _strlen - this function returns the length of a string
 *
 *
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
>>>>>>> 7966964f8ab85e8e3c4a88eaeef4a97506570c89
}
