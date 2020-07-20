#include "dhk.h"
/**
 *_puts - prints a string followed by a new line
 *@str: String to be printed to stdout
 *
 *Return: void
 */
void _puts(char *str)
{
	char *c;

	c = str;
	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
}
