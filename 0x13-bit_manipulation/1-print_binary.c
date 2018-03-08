#include <stdio.h>
#include "holberton.h"
/**
 *print_binary - prints the binary representation of a number
 *@n: the number to convert to binary
 *
 *Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int i = 0;
	int start = 0;
	unsigned long int highest;

	highest = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	while (i < sizeof(unsigned long int) * 8)
	{
		if ((n & highest) != 0)
			start = 1;
		if (start == 1)
		{
			if ((n & highest) == 0)
				_putchar('0');
			else
				_putchar('1');
		}
		highest = highest >> 1;
		i++;
	}
	if (start == 0)
		_putchar('0');
}
