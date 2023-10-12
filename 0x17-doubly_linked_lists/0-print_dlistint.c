#include "lists.h"

/**
 * print_dlistint - Prints all elements of a doubly linked list
 * @h: Head of the linked list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (nodes);
	
	while (h != NULL)
	{
		dprintf(STDOUT_FILENO, "%d/n",h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
