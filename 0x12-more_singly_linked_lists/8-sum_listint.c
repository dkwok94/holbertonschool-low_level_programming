#include <stdio.h>
#include "lists.h"
/**
 *sum_listint - returns the sum of all the data in the linked list
 *@head: pointer to the first element of the linked list
 *
 *Return: the sum of the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *copy;

	copy = head;

	while (copy != NULL)
	{
		sum += copy->n;
		copy = copy->next;
	}
	return (sum);
}
