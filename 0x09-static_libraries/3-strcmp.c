#include "main.h"
/**
 * _strcmp - takes two strings and compares the two
 * if string_02 > string_01 return negative int
 * if string_01 > string_02 return positive int
 * else return 0
 *
 * @s1: string_01
 * @s2: string_02
 *
 * Return: negative or positive int
 */
int _strcmp(char *s1, char *s2)
{
	int res, pos;

	res = 0;
	for (pos = 0; s1[pos] != 0 && s2[pos] != 0; pos++)
	{
		if (s1[pos] != s2[pos])
		{
			res = s1[pos] - s2[pos];
			break;
		}
	}

	return (res);
}
