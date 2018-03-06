#include <stdio.h>
#include "lists.h"
/**
 *listint_len - prints the number of elements of a linked list
 *@h: pointer to a linked list
 *
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
