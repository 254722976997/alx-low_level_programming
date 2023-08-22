#include "main.h"

/**
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
}
