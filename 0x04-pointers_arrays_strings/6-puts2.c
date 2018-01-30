#include "holberton.h"
/**
 *puts2 - prints every 2 chars of a string
 *@str: string to be printed
 *
 *Return: void
 */
void puts2(char *str)
{
	int index = 1;

	while (*str != '\0')
	{
		if ((index % 2) != 0)
		{
			_putchar(*str);
		}
		str++;
		index++;
	}
	_putchar('\n');
}
