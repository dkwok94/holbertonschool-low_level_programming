#include "dhk.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: string
 *@accept: bytes that are acceptable
 *
 *Return: Number of bytes in s which consist only of bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int numbytes = 0;
	char *start = accept;

	for (; *s != '\0'; s++)
	{
		for (accept = start; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				numbytes++;
				break;
			}
		}
		if (*accept == '\0')
			return (numbytes);
	}
	return (numbytes);
}
