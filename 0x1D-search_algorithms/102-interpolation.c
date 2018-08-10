#include "search_algos.h"
/**
 *interpolation_search - searches for an element in an array of sorted ints
 *@array: the pointer to the array to check
 *@size: the size of the array
 *@value: the value to search for
 *
 *Return: the first index where value is located or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t low = 0;
	size_t pos;

	while ((array[high] != array[low])
	       && (value >= array[low])
	       && (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);

	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
