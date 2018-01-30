#include "holberton.h"
/**
 *print_rev - prints a string in reverse
 *@s: The string to print reverse of
 *
 *Return: void
 */
void print_rev(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	s--;

	while (strlen != 0)
	{
		_putchar(*s);
		s--;
		strlen--;
	}
	_putchar('\n');
}
