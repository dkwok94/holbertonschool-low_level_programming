#include "dhk.h"
/**
 *_strncat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *@n: bytes to concatenate
 *
 *Return: pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *origin = dest;
	int counter = 0;

	while (*dest != '\0')
		dest++;

	while (counter < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}
	*dest = '\0';
	return (origin);
}
