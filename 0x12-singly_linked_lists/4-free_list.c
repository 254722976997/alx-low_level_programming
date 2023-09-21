#include "lists.h"

/**
* free_list - frees linked list
*
* @head: Head of list to free
* Return: void.
*/
void free_list(list_t *head)
{
	if (!head)
		return;
	if (head->next)
		free_list(head->next);
	free(head->str);
	free(head);
}
