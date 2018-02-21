#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: array to be searched
 *@size: number of elements in the array
 *@cmp: pointer to a function to compare values
 *
 *Return: first index for which cmp function does not return 0,
 *-1 if no element matches, -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(*(array + i)))
			return (i);
		i++;
	}
	return (-1);
}
