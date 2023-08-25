#include "main.h"

/**
 * main - Entry point
 * Description - Checkers s for a digist (from 0 to 9)
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
