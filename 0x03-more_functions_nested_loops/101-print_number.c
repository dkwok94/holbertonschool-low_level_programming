#include "holberton.h"

int howmanynumbers(int n);
int powerbaseten(int baseten, int basetenplaces);

/**
 *print_number - Prints an integer using only putchar
 *@n: A number to print
 *
 *Description: This function prints any integer using only putchar
 *and no longs, arrays/points, or hard-coded values
 *Return: void
 */
void print_number(int n)
{
	int digits = howmanynumbers(n);
	int count = 0;
	int baseten = 1;
	int basetenplaces = digits - 1;

	baseten = powerbaseten(baseten, basetenplaces);
	while (count < digits)
	{
		if (n < 0)
		{
			if (count == 0)
				_putchar('-');
			_putchar((-1 * (n / baseten)) + '0');
		}
		else
			_putchar((n / baseten) + '0');
		n = n % baseten;
		baseten /= 10;
		count++;
	}
}

/**
 *powerbaseten - calculates the largest factor of 10
 *@baseten: the final base ten factor
 *@basetenplaces: the number of tens places
 *
 *Description: This function will calculate the largest factor of 10
 *for example, for 1024, this program calculates 1000
 *Return: the final base ten factor
 */
int powerbaseten(int baseten, int basetenplaces)
{
	while (basetenplaces != 0)
	{
		baseten *= 10;
		basetenplaces--;
	}
	return (baseten);
}

/**
 *howmanynumbers - counts how many digits
 *@n: An arbitrary number
 *
 *Description: Takes a number passed to it and counts
 *how many digits there are.
 *Return: The number of digits in the number
 */
int howmanynumbers(int n)
{
	int counter = 1;

	while ((n / 10) != 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}
