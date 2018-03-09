#include <stdio.h>
#include "holberton.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@n: number to look at
 *@index: the index of interest
 *
 *Return: the bit value (0 or 1) or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int placeholder;

	placeholder = 1UL << index;
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	if ((n & placeholder) == 0)
		return (0);
	else
		return (1);
}
