#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * main -  to check the code.
=======
 * main - check the code.
>>>>>>> 022597795a4edbe00a8152ad627af531054bb51e
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
}
