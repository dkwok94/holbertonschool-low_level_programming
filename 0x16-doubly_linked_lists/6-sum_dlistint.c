#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *sum_dlistint - returns the sum of all data in the doubly linked list
 *@head: the head of the list
 *
 *Return: the sum of the data in the doubly linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
