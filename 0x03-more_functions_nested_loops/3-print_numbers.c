#include "holberton.h"
/**
 *print_numbers - prints the numbers
 *
 *Description: Prints the numbers from 0 through 9
 *Return: void
 */
void print_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
