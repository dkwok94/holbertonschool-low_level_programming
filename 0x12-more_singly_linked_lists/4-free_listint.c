#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint - frees a listint_t linked list
 *@head: pointer to the start of the list
 *
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
