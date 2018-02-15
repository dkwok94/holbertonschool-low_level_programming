#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array
 *@nmemb: the number of elements
 *@size: the size in bytes of each element of nmemb
 *
 *Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	return (array);
}
