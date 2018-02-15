#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min: smallest value contained
 *@max: largest value contained
 *
 *Return: pointer to array of integers
 */
int *array_range(int min, int max)
{
	int total;
	int *array;
	int counter = 0;
	int value = min;

	if (min > max)
		return (NULL);
	total = max - min + 1;
	array = malloc(sizeof(int) * total);
	if (array == NULL)
		return (NULL);
	while (value <= max)
	{
		*(array + counter) = value;
		value++;
		counter++;
	}
	return (array);
}
