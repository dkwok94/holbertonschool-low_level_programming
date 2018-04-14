#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *get_dnodeint_at_index - returns the nth node of the doubly linked list
 *@head: the head of the doubly linked list
 *@index: the index of the node to return (starting at 0)
 *
 *Return: the address of the node or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodes = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		nodes++;
		if (nodes - 1 == index)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
