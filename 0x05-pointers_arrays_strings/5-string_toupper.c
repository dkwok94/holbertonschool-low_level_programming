#include "holberton.h"
/**
 *string_toupper - changes all lowercase letters to upper
 *@str: string to change
 *
 *Return: pointer to string
 */
char *string_toupper(char *str)
{
	char *origin = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (origin);
}
