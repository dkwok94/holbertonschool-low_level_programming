#include "dhk.h"
/**
 *_puts_recursion - prints a string recursively
 *@s: string to print
 *
 *Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
