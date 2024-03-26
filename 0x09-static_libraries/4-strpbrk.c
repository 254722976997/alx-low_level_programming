#include "main.h"
/**
 * _strpbrk - locates the first occurrence in string s
 * of any of bytes in string accept
 *
 * @s: search string
 * @accept: search chars
 *
 * Return: pointer to first occurance of seached char
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int pos_s, pos_a;

	for (pos_s = 0; s[pos_s] != 0; pos_s++)
	{
		for (pos_a = 0; accept[pos_a] != 0; pos_a++)
		{
			if (s[pos_s] == accept[pos_a])
				return (&s[pos_s]);
		}
	}

	return (0);
}
