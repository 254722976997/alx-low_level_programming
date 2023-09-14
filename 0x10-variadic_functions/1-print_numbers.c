#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by new line
 * @separator: string to printed between numbers
 * @n: number of the integers passed to function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;


	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(valist, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
