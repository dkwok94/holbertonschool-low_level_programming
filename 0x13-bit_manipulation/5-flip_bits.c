#include <stdio.h>
#include "holberton.h"
/**
 *flip_bits - returns the number of bits to flip to get from one
 *num to another
 *@n: original number
 *@m: number to convert to find number of flips
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xornum;
	unsigned long int highest;
	unsigned int counter = 0;

	xornum = n ^ m;
	highest = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (highest != 0)
	{
		if ((xornum & highest) != 0)
			counter++;
		highest = highest >> 1;
	}
	return (counter);
}
