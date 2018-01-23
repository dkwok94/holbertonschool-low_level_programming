#include "holberton.h"
/**
 *print_alphabet_x10 - prints alphabet 10x
 *
 *Description: This program will print the lowercase letters ten times
 *Return: 0 upon successful completion
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
