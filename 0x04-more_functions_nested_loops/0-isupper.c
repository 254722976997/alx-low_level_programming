#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * main - to check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
=======

/**
 * main-entry point
 * Description : a program that checks percae
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
>>>>>>> 022597795a4edbe00a8152ad627af531054bb51e
}
