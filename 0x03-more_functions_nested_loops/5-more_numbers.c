#include "holberton.h"
/**
 *more_numbers - Prints the numbers from 0 to 14, 10 times
 *
 *Return: void
 */
void more_numbers(void)
{
	int num1 = 0;
	int num2 = -1;
	int times = 0;

	while (times < 10)
	{
		num1 = 0;
		num2 = -1;
		while (num2 < 5)
		{
			_putchar(num1 + '0');
			if (num1 == 9)
			{
				num1 = 1;
				num2++;
			}
			else if (num2 < 0)
				num1++;
			else
			{
				_putchar(num2 + '0');
				num2++;
			}
		}
		_putchar('\n');
		times++;
	}
}
