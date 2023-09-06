#include "main.h"
/**
 * _strncpy - copies src string into dest string
 * up to n size.
 *
 * @dest: string destination
 * @src: source string
 * @n: max numbers of the string copied
 *
 * Return: changed dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int pos_dest;

	for (pos_dest = 0; pos_dest < n && src[pos_dest] != 0; pos_dest++)
		dest[pos_dest] = src[pos_dest];

	for (; pos_dest < n; pos_dest++)
		dest[pos_dest] = 0;

	return (dest);
}
