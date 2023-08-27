#include "main.h"

/**
 * rot13 - encodes a string with the rot13 cipher
 * @a: Pointer to array to be converted
 *
 * Return: Array encoded in rot13 cipher
 */
char *rot13(char *a)
{
	int i, j;
	char alpha[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char ch[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= 52 ; j++)
		{
			if (a[i] == alpha[j])
			{
				a[i] = ch[j];
				break;
			}
		}
	}
	return (a);
}
