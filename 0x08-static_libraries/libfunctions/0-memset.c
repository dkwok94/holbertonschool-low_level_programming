#include "dhk.h"
/**
 *_memset - fills memory with constant byte
 *@s: memory area
 *@b: byte used to fill memory area
 *@n: the number of bytes in memory to fill
 *
 *Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;
	char *start = s;

	while (counter < n)
	{
		*s = b;
		s++;
		counter++;
	}
	return (start);
}
