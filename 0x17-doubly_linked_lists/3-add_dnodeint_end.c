#include "lists.h"

/**
 *add_dnodeint_end - adds a new node at the end of a doubly linked list
 *@head: Pointer to the linked list
 *@n: Data value
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	new->next = NULL;
	new->prev = temp;
	temp->next = new;
	return (new);
}
