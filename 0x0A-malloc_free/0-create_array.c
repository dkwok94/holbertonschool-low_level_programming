#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars and initializes with specific char
 *@size: size of
 *@c: character to initialize it with
 *
 *Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	if (size == 0)
		return (0);

	char *chararray = malloc(sizeof(char) * size);

	if (chararray == 0)
		return (0);

	while (i < size)
	{
		*(chararray + i) = c;
		i++;
	}

	return (chararray);
}
