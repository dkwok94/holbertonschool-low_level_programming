#include <stdio.h>
#include "dhk.h"
/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: pointer to the number
 *@index: index of interest
 *
 *Return: 1 if successful, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int placeholder;

	placeholder = 1UL << index;
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	if ((*n & placeholder) == 0)
		return (1);
	*n = *n ^ placeholder;
	return (1);
}
