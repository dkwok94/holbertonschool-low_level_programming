#include "holberton.h"
#include <stdio.h>
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: string to search
 *@accept: set of acceptable characters
 *
 *Return: pointer to the byte in s that matches accept
 *or NULL if there is no such byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	for (; *s != '\0'; s++)
	{
		for (accept = start; *accept != '\0'; accept++)
		{
			if (*s == *accept)
				return (s);
		}
	}
	return (NULL);
}
