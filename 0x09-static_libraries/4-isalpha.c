#include "main.h"
/**
 * _isalpha - function takes a char and dictates
 * if it's alphabetic of not
 *
 * @c: char
 *
 * Return: 0 or 1 (not alpha - alpha)
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
