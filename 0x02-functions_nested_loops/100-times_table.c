#include <stdio.h>
#include "holberton.h"
/**
 *print_times_table - prints a multiplication table for numbers
 *between 1 and 15
 *@n: The number of columns in the table (largest number)
 *
 *Return: void
 */
void print_times_table(int n)
{
	int row = 0;
	int column = 0;
	int product;

	if ((n <= 15) && (n > 0))
	{
		while (row <= n)
		{
			column = 0;
			while (column <= n)
			{
				product = row * column;

				if ((product > 9) && (product < 100))
					lessthan100greaterthan9(product);

				else if (product > 99)
					greaterthan99(product);

				else
					lessthan9(product, column);

				if (column != n)
					_putchar(',');

				column++;
			}
			_putchar('\n');
			row++;
		}
	}
}


/**
 *lessthan100greaterthan9 - prints numbers less than 100 and greater than 9
 *@product: A row x column product
 *
 *Description: This function prints the number and space sequences for products
 *larger than 9, but less than 100
 *Return: void
 */
void lessthan100greaterthan9(int product)
{
	_putchar(' ');
	_putchar(' ');
	_putchar((product / 10) + '0');
	_putchar((product % 10) + '0');
}


/**
 *greaterthan99 - prints numbers greater than 99
 *@product: a row x column product
 *
 *Description: This function prints the number and space sequences for products
 *larger than 99
 *Return: void
 */
void greaterthan99(int product)
{
	_putchar(' ');
	_putchar(((product / 10) / 10) + '0');
	_putchar(((product / 10) % 10) + '0');
	_putchar((product % 10) + '0');
}


/**
 *lessthan9 - prints numbers less than 9
 *@product: a row x column product
 *@column: the column of the current product. Important because the target
 *format is there are no spaces before numbers in column 0 (first vertical
 *column)
 *Description: This function prints the number and space sequences for products
 *smaller than 9
 *Return: void
 */
void lessthan9(int product, int column)
{
	if (column != 0)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar(product + '0');
}
