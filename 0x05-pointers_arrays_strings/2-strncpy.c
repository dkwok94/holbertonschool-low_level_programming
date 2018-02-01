#include "holberton.h"
/**
 *_strncpy - copies a string
 *@dest: destination string
 *@src: source string
 *@n: number of bytes to copy
 *
 *Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;
	char *origin = dest;

	while ((counter < n) && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	while (counter < n)
	{
		*dest = '\0';
		counter++;
		dest++;
	}
	return (origin);
}
