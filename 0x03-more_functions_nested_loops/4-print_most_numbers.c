#include "dhk.h"
/**
 *print_most_numbers - Prints the numbers excluding 2 and 4
 *
 *Return: void
 */
void print_most_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		if ((c != '2') && (c != '4'))
		{
			_putchar(c);
			c++;
		}

		else
			c++;
	}
	_putchar('\n');
}
