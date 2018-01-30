#include "holberton.h"
/**
 *_strcpy - copies a string to a buffer
 *@dest: buffer where string is copied
 *@src: copied string
 *
 *Return: the pointer to the dest buffer
 */
char *_strcpy(char *dest, char *src)
{
	char *origin = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (origin);
}
