#include "holberton.h"
/**
 *print_number - prints an integer
 *@n: Integer to print
 *
 *Return: void
 */
void print_number(int n)
{
	unsigned storage = n;
	int tens = 1;
	int isnegative = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
		isnegative = 1;

	tens = findtens(n);

	if (isnegative == 1)
	{
		_putchar('-');
		storage *= -1;
	}

	while (tens != 0)
	{
		_putchar((storage / tens) + '0');
		storage = storage % tens;
		tens /= 10;
	}
}

/**
 *findtens - finds the tens multiplier
 *@n: integer number
 *
 *Return: The tens multiplier
 */
int findtens (int n)
{
	int tens = 1;

	while ((n / 10) != 0)
	{
		tens *= 10;
		n /= 10;
	}
	return (tens);
}
