#include "dhk.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: how many bytes of s2 to concatenate
 *
 *Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int counter = 0, counter2 = 0;
	unsigned int length1, length2, total;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	if (n >= length2)
		total = length1 + length2 + 1;
	else
		total = length1 + n + 1;

	concat = malloc(sizeof(char) * total);
	if (concat == NULL)
		return (NULL);

	while (*(s1 + counter) != '\0')
	{
		*(concat + counter) = *(s1 + counter);
		counter++;
	}
	if (n >= length2)
		while (*(s2 + counter2) != '\0')
		{
			*(concat + counter) = *(s2 + counter2);
			counter++;
			counter2++;
		}
	else
		while (counter2 < n)
		{
			*(concat + counter) = *(s2 + counter2);
			counter++;
			counter2++;
		}
	*(concat + counter) = '\0';
	return (concat);
}

/**
 *_strlen - finds the length of a string
 *@str: string to find length of
 *
 *Return: string length
 */
unsigned int _strlen(char *str)
{
	int counter = 0;
	int length = 0;

	while (*(str + counter) != '\0')
	{
		length++;
		counter++;
	}
	return (length);
}
