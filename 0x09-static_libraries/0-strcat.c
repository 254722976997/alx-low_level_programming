#include "main.h"
/**
 * _strcat - this function takes to strings.
 * Appending the second string to end of first one
 *
 * @dest: this the string destination
 * @src: this the copied string
 *
 * Return: returns the concatenated dest string
 */
char *_strcat(char *dest, char *src)
{
	int len_dest, pos_src;

	for (len_dest = 0; dest[len_dest] != 0;)
		len_dest++;

	for (pos_src = 0; src[pos_src]; pos_src++)
	{
		dest[len_dest] = src[pos_src];
		len_dest++;
	}

	return (dest);
}
