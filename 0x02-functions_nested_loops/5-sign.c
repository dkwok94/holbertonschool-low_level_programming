#include "dhk.h"
/**
 *print_sign - Prints the sign of a given integer
 *@n: arbitrary number to be tested
 *
 *Description: This program will print the sign followed by a return value
 *Return: 1 if positive, 0 if zero, and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
