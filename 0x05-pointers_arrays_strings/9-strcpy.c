#include "main.h"

/**
<<<<<<< HEAD
 * *_strcpy - function that copies the string pointed to by src.
 * @dest: array name.
 * @src: elements of the array.
 *
 * Return: Always void.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
	_putchar('\n');
=======
 * _strcpy - copies thes string pointed to by src
 * @dest: Points to the destination buffer
 * @src: pointer to the source string
 *
 * Return: pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
>>>>>>> 7966964f8ab85e8e3c4a88eaeef4a97506570c89
}
