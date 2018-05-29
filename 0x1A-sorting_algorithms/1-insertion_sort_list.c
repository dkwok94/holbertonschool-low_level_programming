#include "sort.h"

/**
 *insertion_sort_list - sorts a doubly linked list of integers in ascending
 *order with the insertion sort algorithm
 *@list: double pointer to the list head
 *
 *Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *t, *t2;

	if (*list == NULL || (*list)->next == NULL)
		return;

	for (cur = *list; cur != NULL; cur = cur->next)
	{
		t = cur;
		for (t2 = t->prev; t2 != NULL && t2->n > t->n; t2 = t->prev)
		{
			if (t2->prev != NULL && t->next != NULL)
			{
				t2->prev->next = t;
				t->next->prev = t2;
				t2->next = t->next;
				t->prev = t2->prev;
				t->next = t2;
				t2->prev = t;
				print_list(*list);
				continue;
			}

			if (t2->prev == NULL)
			{
				t->prev = NULL;
				t2->next = t->next;
				t2->prev = t;
				if (t->next != NULL)
					t->next->prev = t2;
				t->next = t2;
				*list = t;
				print_list(*list);
				continue;
			}

			if (t->next == NULL)
			{
				t->prev = t2->prev;
				t->next = t2;
				t2->next = NULL;
				t2->prev->next = t;
				t2->prev = t;
				print_list(*list);
				continue;
			}
		}

	}
}
