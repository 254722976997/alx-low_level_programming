#include "main.h"
/**
 * _strchr - Returns pointer to first occurrence of char c
 * in the string s, or NULL if the character is not found
 *
 * @s: string to search in
 * @c: char to find
 *
 * Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	unsigned int pos;

	for (pos = 0; s[pos] != 0 && s[pos] != c;)
		pos++;

	if (s[pos] == c)
		return (&s[pos]);
	else
		return (0);
}
