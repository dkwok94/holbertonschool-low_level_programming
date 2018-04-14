#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_dlistint - prints all elements of a doubly linked list
 *@h: the head of the linked list
 *
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
