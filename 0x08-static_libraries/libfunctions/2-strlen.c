#include "dhk.h"
/**
 *_strlen - returns the length of a string
 *@s: The string whose length you want
 *
 *Return: length of string s
 */
int _strlen(char *s)
{
	char *c;
	int length = 0;

	c = s;
	while (*c != '\0')
	{
		length++;
		c++;
	}
	return (length);
}
