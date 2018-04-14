#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_dlistint - frees a doubly linked list
 *@head: the head of the current list
 *
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	temp = head->next;
	while (temp != NULL)
	{
		free(head);
		head = temp;
		temp = temp->next;
	}
	free(head);
}
