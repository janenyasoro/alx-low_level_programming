#include "lists.h"

/**
 *free_dlistint - Frees a doubly linked list
 *@head: Pointer to the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *next_node = NULL;

	while (temp != NULL)
	{
		next_node = temp->next;
		free(temp);
		temp = next_node;
	}
}
