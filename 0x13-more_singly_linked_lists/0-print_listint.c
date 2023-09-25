#include "lists.h"

/**
* print_listint - prints all elements of list.
*
* @h: list to print elements of.
* Return: size_t of list
	    */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (k)
	{
		printf("%d\n", k->n);
		k = k->next;
		n++;
	}
	return (n);
}
