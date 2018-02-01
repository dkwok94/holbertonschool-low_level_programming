#include "holberton.h"
/**
 *cap_string - capitalizes all words
 *@str: string to be acted upon
 *
 *Return: pointer to string
 */
char *cap_string(char *str)
{
	char *origin = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			if (*str == *origin ||
			    *(str - 1) == ' ' ||
			    *(str - 1) == '\t' ||
			    *(str - 1) == '\n' ||
			    *(str - 1) == ',' ||
			    *(str - 1) == ';' ||
			    *(str - 1) == '.' ||
			    *(str - 1) == '!' ||
			    *(str - 1) == '?' ||
			    *(str - 1) == '"' ||
			    *(str - 1) == '(' ||
			    *(str - 1) == ')' ||
			    *(str - 1) == '{' ||
			    *(str - 1) == '}')
				*str = *str - 32;
		str++;
	}
	return (origin);
}
