#include "holberton.h"
/**
 *print_diagonal - prints diagonal lines
 *@n: number of times the character \ is printed
 *
 *Return: void
 */
void print_diagonal(int n)
{
	int counter = 0;
	int spaces = 0;

	while (counter < n)
	{
		spaces = 0;
		while (spaces < counter)
		{
			_putchar(' ');
			spaces++;
		}
		_putchar('\\');
		_putchar('\n');
		counter++;
	}

	if (n <= 0)
		_putchar('\n');
}
