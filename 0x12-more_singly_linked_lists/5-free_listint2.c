#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *free_listint2 - free a listint_t linked list
 *@head: pointer to the location of the head pointer to the beginning of list
 *
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
