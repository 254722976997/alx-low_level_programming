#include "main.h"
#include <stdio.h>

/**
* main - print all arguments received.
* @argc: represents number of command line arguments.
* @argv: array of char pointers (contains all parameters).
* Return: Always success (0)
*/

int main(int argc, char *argv[])
{
	int i;

	do {
		printf("%s\n", argv[i]);
				i++;
				} while (i < argc);

	return (0);
}
