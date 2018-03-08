#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *reverse_listint - reverses a linked list
 *@head: pointer to the head pointer of a linked list
 *
 *Return: pointer to the first node of the returned list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *nxt;

	current = *head;
	*head = current->next;
	nxt = (*head)->next;

	current->next = NULL;

	while (nxt != NULL)
	{
		(*head)->next = current;
		current = *head;
		*head = nxt;
		nxt = nxt->next;
	}
	(*head)->next = current;
	return (*head);
}
