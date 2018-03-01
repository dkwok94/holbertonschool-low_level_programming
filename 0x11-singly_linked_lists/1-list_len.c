#include <stdio.h>
#include "lists.h"
/**
 *list_len - returns the number of elements in a linked list
 *@h: pointer to the linked list
 *
 *Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int elements = 0;

	if (h == NULL)
		return (-1);

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
