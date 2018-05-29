#include "sort.h"
/**
 *bubble_sort - sorts an array of integers using bubble sort algorithm
 *@array: the array to sort
 *@size: the size of the array
 *
 *Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t max_comp, i, j;
	int temp;

	if (array == NULL || size == 0 || size == 1)
		return;


	for (max_comp = size - 1; max_comp > 0; max_comp--)
	{
		for (i = 0, j = 1; j <= max_comp; i++, j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
