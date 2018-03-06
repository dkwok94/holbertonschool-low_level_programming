#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: pointer to the memory location of the head pointer
 *
 *Return: 0 if the list is empty, the data of the head node otherwise
 */
int pop_listint(listint_t **head)
{
	int number;
	listint_t *newhead;

	if (*head == NULL)
		return (0);

	number = (*head)->n;

	newhead = (*head)->next;
	free(*head);
	*head = newhead;
	return (number);
}
