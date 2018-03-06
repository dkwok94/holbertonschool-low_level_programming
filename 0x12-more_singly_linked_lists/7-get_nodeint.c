#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a linked list
 *@head: the pointer to the first element of the list
 *@index: index of the node returned
 *
 *Return: a pointer to the nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes = 0;
	listint_t *copy;
	unsigned int counter = 0;

	copy = head;

	while (copy != NULL)
	{
		nodes++;
		copy = copy->next;
	}
	copy = head;
	if (index > nodes - 1)
		return (NULL);

	while (counter != index)
	{
		counter++;
		copy = copy->next;
	}
	return (copy);
}
