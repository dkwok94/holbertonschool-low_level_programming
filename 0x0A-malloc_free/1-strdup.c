#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - returns pointer to allocated space containing copy of string
 *@str: string that will be copied into the space
 *
 *Return: pointer to allocated space
 */
char *_strdup(char *str)
{
	int i = 0;
	int length = 0;
	char *string;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		length++;
		i++;
	}

	i = 0;
	string = malloc(sizeof(char) * (length + 1));

	if (string == NULL)
		return (NULL);

	while (i < length + 1)
	{
		*(string + i) = *(str + i);
		i++;
	}
	*(string + i) = '\0';
	return (string);
}
