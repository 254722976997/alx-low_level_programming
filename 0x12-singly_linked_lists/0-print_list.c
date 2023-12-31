#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - prints all elements of list.
* @h: list to print elements,
* Return: number of nodes in list.
*/
size_t print_list(const list_t *h)
{
int i = 0, ret = 1;
char nul[] = "(nil)";

if (!h)
	return (0);
if (h->str)
	i = _strlen(h->str);
printf("[%d] ", i);

if (!h->str)
	printf("%s\n", nul);
else
	printf("%s\n", h->str);
if (h->next)
	ret += print_list(h->next);
return (ret);
}

/**
* _strlen - finds length of string
* @str: string
* Return: string length
*/
int _strlen(char *str)
{
	int i;

	for (i = 0; *(str + i);)
		i++;
	return (i);
}
