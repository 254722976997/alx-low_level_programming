#include "main.h"
/**
 * _memset - fills the first n bytes of memory pointed by s
 * with the value of b
 *
 * @s: processed string
 * @b: overwrite value
 * @n: bytes number to overwrite
 *
 * Return: strings processed
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int pos;

	for (pos = 0; pos < n; pos++)
	{
		s[pos] = b;
	}

	return (s);
}
