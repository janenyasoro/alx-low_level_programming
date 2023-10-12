#include "lists.h"

/**
 *dlistint_len - Calculates no. of elements in a list
 *@h: Pointer to the head of the linked list
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
