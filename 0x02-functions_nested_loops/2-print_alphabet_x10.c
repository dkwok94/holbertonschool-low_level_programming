#include "holberton.h"
/**
 *
 *
 *
 *
 */
void print_alphabet_x10(void)
{
	int letter;
	int counter = 0;

	while (counter < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		counter++;
	}
}
