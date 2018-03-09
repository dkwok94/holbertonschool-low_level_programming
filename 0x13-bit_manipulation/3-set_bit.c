#include <stdio.h>
#include "holberton.h"
/**
 *set_bit - sets the value of a bit at some index to 1
 *@n: pointer to number
 *@index: the index to change
 *
 *Return: 1 if it works, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int placeholder;

	placeholder = 1UL << index;
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n = *n | placeholder;
	return (1);
}
