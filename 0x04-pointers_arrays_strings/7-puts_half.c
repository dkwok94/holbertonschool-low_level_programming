#include "dhk.h"
/**
 *puts_half - prints half of a string
 *@str: string to print
 *
 *Return: void
 */
void puts_half(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	if ((length % 2) == 0)
		str -= (length / 2);
	else
		str -= ((length - 1) / 2);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
