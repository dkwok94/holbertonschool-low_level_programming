#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_dnodeint - adds a new node at the beginning of a doubly linked list
 *@head: the head of the current doubly linked list
 *@n: the value of the new node of the list
 *
 *Return: the address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
	}

	else
	{
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
