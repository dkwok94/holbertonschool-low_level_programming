#include "dhk.h"
/**
 *_memcpy - copies memory area
 *@dest: destination area of memory
 *@src: source area of memory
 *@n: number of bytes to copy
 *
 *Return: Pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0;
	char *start = dest;

	while (counter < n)
	{
		*dest = *src;
		src++;
		dest++;
		counter++;
	}
	return (start);
}
