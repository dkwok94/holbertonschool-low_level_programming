#include "holberton.h"
/**
 *rot13 - encodes a string into rot13
 *@str: string to be encoded
 *
 *Return: pointer to encoded string
 */
char *rot13(char *str)
{
	char *origin = str;

	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			if ((*str + 13) > 'Z')
				*str = ('A' - 1) + (*str + 13 - 'Z');
			else
				*str = *str + 13;
		}

		else if (*str >= 'a' && *str <= 'z')
		{
			if ((*str + 13) > 'z')
				*str = ('a' - 1) + (*str + 13 - 'z');
			else
				*str = *str + 13;
		}

		str++;
	}
	return (origin);
}
