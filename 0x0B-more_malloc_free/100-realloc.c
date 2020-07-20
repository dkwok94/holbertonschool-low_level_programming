#include "dhk.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_realloc - reallocates memory with malloc and free
 *@ptr: pointer to previously allocated memory
 *@old_size: old size of the malloc
 *@new_size: new size of the malloc
 *
 *Return: pointer to memory allocation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}

	else
	{
		if (ptr == NULL)
		{
			ptr = malloc(new_size);
			return (ptr);
		}
		if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
		else
			return (ptr);
	}
}
