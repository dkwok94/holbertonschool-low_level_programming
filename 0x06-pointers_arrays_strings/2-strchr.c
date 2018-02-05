#include "holberton.h"
#include <stdio.h>
/**
 *_strchr - locates a character in a string
 *@s: string to look into
 *@c: character to look for
 *
 *Return: pointer to first occurance, or NULL if not found
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return ('\0');
	else
		return (NULL);
}
