#include <stdio.h>

/**
* main - Program that prints its name, followed by new line.
* @argc: Number of command lines arguments.
* @argv: Char of arrays.
*
* Return: 0.
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
