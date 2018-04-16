#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: the head of the current list
 *@idx: the index to insert the node at (starts at 0)
 *@n: the value of the new node
 *
 *Return: the address of the new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int nodes = 0;
	dlistint_t *temp = *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL && idx != 0)
		return (fail_op(new));
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp != NULL)
	{
		nodes++;
		if (nodes - 1 == idx)
		{
			new->next = temp;
			new->prev = temp->prev;
			temp->prev->next = new;
			temp->prev = new;
			return (new);
		}
		temp = temp->next;
	}
	if (nodes == idx)
		return (add_dnodeint_end(h, n));
	return (fail_op(new));
}


/**
 *fail_op - handles failure of insertion to the doubly linked list
 *@new: the new node to add
 *
 *Return: NULL
 */
dlistint_t *fail_op(dlistint_t *new)
{
	free(new);
	return (NULL);
}
