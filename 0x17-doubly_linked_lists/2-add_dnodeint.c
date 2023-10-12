#include "lists.h"

/**
 * add-dnodeint: adds a new node at the beginning of a dlistint_t list
 * @head: Pointer to head of the list
 * @n: Data in the list
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n )
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if(new == NULL)
		return (NULL);

	new->n = n;

	if (*head  != NULL)
	{
		new->next = *head;
		new->prev = (*head)->prev;
		(*head)->prev = new;
		*head = new;
		return (new);
	}

	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}

