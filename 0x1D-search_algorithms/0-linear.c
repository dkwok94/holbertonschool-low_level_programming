#include "search_algos.h"
/**
*linear_search - searches for a value in an array of integers
*@array: the pointer to the array to search
*@size: the size of the array
*@value: the value to search for
*
*Return: the first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	
	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
			
		else
			i++;	
	}
	return (-1);
}
