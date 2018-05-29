#include "sort.h"
/**
 *partition - partitions the array using the rightmost index as pivot
 *@array: the array to partition
 *@low: the lower index of the subarray
 *@high: the higher index of the subarray
 *@size: size of the array
 *
 *Return: the index position of the partitioned element
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, wall, i = low, swap_temp;

	pivot = array[high];
	wall = low - 1;

	while (i <= high)
	{
		if (array[i] <= pivot)
		{
			wall++;
			if (wall != i)
			{
				swap_temp = array[wall];
				array[wall] = array[i];
				array[i] = swap_temp;
				print_array(array, size);
			}
		}
		i++;
	}
	return (wall);
}

/**
 *quick_sort_lomuto - implements the quicksort with Lomuto partition scheme
 *@array: the array to sort
 *@low: the lower index of the subarray to sort
 *@high: the higher index of the subarray to sort
 *@size: the size of the whole array
 *
 *Return: void
 */
void quick_sort_lomuto(int *array, int low, int high, size_t size)
{
	int par_i;

	if (low > high)
		return;

	par_i = partition(array, low, high, size);

	quick_sort_lomuto(array, low, par_i - 1, size);
	quick_sort_lomuto(array, par_i + 1, high, size);
}

/**
 *quick_sort - sorts an array of integers with quick sort algorithm
 *@array: the array to sort
 *@size: the size of the array
 *
 *Return: void
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_lomuto(array, 0, size - 1, size);
}
