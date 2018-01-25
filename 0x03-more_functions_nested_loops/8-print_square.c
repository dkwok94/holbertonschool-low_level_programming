#include "holberton.h"
/**
 *print_square - Prints a square followed by a new line
 *@size: The size of the square
 *
 *Return: void
 */
void print_square(int size)
{
	int rows = 0;
	int columns;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (rows < size)
	{
		columns = 0;
		while (columns < size)
		{
			_putchar('#');
			columns++;
		}
		_putchar('\n');
		rows++;
	}
}
