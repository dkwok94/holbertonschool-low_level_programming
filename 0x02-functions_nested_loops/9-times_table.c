#include "holberton.h"
/**
 *times_table - prints a 9-times table
 *
 *Description: Prints a multiplication table of 9
 *Return: 0 upon successful completion
 */
void times_table(void)
{
	int num = 0;
	int row = 0;

	while (row <= 9)
	{
		num = 0;
		while (num <= 9)
		{
			if ((row * num) > 9)
			{
				_putchar(' ');
				_putchar(((row * num) / 10) + '0');
				_putchar(((row * num) % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((row * num) + '0');
			}
			if (num != 9)
			{
				_putchar(',');
			}
			num++;
		}
		_putchar('\n');
		row++;
	}
}
