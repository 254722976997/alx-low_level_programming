#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest memory area
 *
 * @dest: destination of bytes
 * @src: array to copy
 * @n: max number of the bytes to copy
 *
 * Return: dest processed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int pos;

	for (pos = 0; pos < n; pos++)
	{
		dest[pos] = src[pos];
	}

	return (dest);
}
