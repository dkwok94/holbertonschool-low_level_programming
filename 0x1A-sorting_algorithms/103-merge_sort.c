#include "sort.h"
/**
 *print_merge - prints the merging syntax
 *@array: the array to sort
 *@left: the leftmost index of the subarray
 *@right: the right index of the subarray
 *
 *Return: void
 */
void print_merge(int *array, int left, int right)
{
	int i = left;

	while (i <= right)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
		else
			printf("\n");
		i++;
	}
}

/**
 *merge - merges subarrays back in order
 *@array: the array to be sorted
 *@buf: array buffer
 *@left: the left index
 *@middle: the middle index (ie boundary)
 *@right: the right index
 *
 */
void merge(int *array, int *buf, int left, int middle, int right)
{
	int i = left, j = middle + 1, k = left;

	while (k <= right)
	{
		if (i <= middle && (j > right || array[i] < array[j]))
		{
			buf[k] = array[i];
			i++;
		}

		else
		{
			buf[k] = array[j];
			j++;
		}
		k++;
	}

	k = left;
	while (k <= right)
	{
		array[k] = buf[k];
		k++;
	}
}

/**
 *merge_break - merge sort with indices
 *@array: the array to sort
 *@buf: array buffer
 *@left: the left index of the subarray
 *@right: the right index of the subarray
 *
 *Return: void
 */
void merge_break(int *array, int *buf, int left, int right)
{
	int middle;

	if (left >= right)
		return;

	if ((right - left) % 2 == 0)
		middle = ((right - left) / 2) + left - 1;
	else
		middle = ((right - left) / 2) + left;

	merge_break(array, buf, left, middle);
	merge_break(array, buf, middle + 1, right);

	printf("Merging...\n");
	printf("[left]: ");
	print_merge(array, left, middle);

	printf("[right]: ");
	print_merge(array, middle + 1, right);

	merge(array, buf, left, middle, right);

	printf("[Done]: ");
	print_merge(array, left, right);
}

/**
 *merge_sort - sorts an array of integers in ascending order via merge sort
 *@array: the array of integers to sort
 *@size: the size of the array
 *
 *Return: void
 */
void merge_sort(int *array, size_t size)
{
	int *buf;

	buf = malloc(sizeof(int) * size);
	if (buf == NULL)
		return;

	merge_break(array, buf, 0, size - 1);

	free(buf);
}
