#include "main.h"

/**
 * _strstr - finds the first occurrence of substring
 * needle in string haystack
 *
 * @haystack: the string to search in
 * @needle: the string to search for
 *
 * Return: first occurance of first needle string in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int pos_h = 0, pos_f, pos_x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[pos_h])
	{
		if (haystack[pos_h] == needle[0])
		{
			pos_x = pos_h;
			pos_f = 0;

			while (needle[pos_f] != '\0')
			{
				if (haystack[pos_x] == needle[pos_f])
					pos_x++, pos_f++;
				else
					break;
			}

			if (needle[pos_f] == '\0' || haystack[pos_x] == '\0')
				return (haystack + pos_h);
		}
		pos_h++;
	}
	return ('\0');
}
