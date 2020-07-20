#include "dhk.h"
/**
 *_strcat - concatenates two strings
 *@dest: destination string
 *@src: source string
 *
 *Return: pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *origin = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (origin);
}
