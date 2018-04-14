#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes the node at a specific index
 *@head: the head ofthe linked list
 *@index: the index of the node to delete
 *
 *Return: 1 if success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int nodes = 0;
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	while (temp != NULL)
	{
		nodes++;
		if (nodes - 1 == index)
		{
			if (index == 0)
			{
				temp = temp->next;
				free(*head);
				*head = temp;
				if (temp != NULL)
					temp->prev = NULL;
				return (1);
			}
			if (temp->next == NULL)
			{
				temp->prev->next = NULL;
				free(temp);
				return (1);
			}
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
