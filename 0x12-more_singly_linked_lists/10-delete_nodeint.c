#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - deletes a node at a specified index
 *in a linked list
 *@head: pointer to the memory location of the head pointer
 *@index: index of element to delete
 *
 *Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodes = 0, counter = 0;
	listint_t *indexm1 = *head, indexpos = *head

	if (head == NULL)
		return (-1);
	while (indexpos != NULL)
	{
		nodes++;
		indexpos = indexpos->next;
	}
	if (nodes < index)
		return (-1);

	if (nodes == index + 1)
	{
		while (counter == index - 1)
		{
			indexm1 = indexm1->next;
		}
		free(indexpos);
		indexm1->next = NULL;
		return (1);
	}
	indexpos = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(indexpos);
	}
	counter = 0;
	while (counter != index)
	{
		if (counter == index - 1)
			indexm1 = indexpos;
		indexpos = indexpos->next;
		counter++;
	}
	indexm1->next = indexpos->next;
	free(indexpos);
	return (1);
}
