#include "dhk.h"
/**
 *print_alphabet - prints the letters from a to z in lowercase
 *
 *Return: 0 upon successful completion
 */
void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
