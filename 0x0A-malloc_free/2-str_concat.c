#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string to concatenate to first
 *
 *Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int lengths1 = 0;
	int lengths2 = 0;
	char *concatenate;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		*s2 = '\0';
	}

	lengths1 = _strlen(s1);
	lengths2 = _strlen(s2);

	concatenate = malloc(sizeof(char) * (lengths1 + lengths2 + 1));
	if (concatenate == NULL)
		return (NULL);

	return (_concat(concatenate, s1, s2));
}

/**
 *_strlen - calculates the length of a string
 *@str: string to calculate the length of
 *
 *Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;
	int length = 0;

	while (*(str + i) != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

/**
 *_concat - concatenates two strings
 *@concatenate: memory space to concatenate the strings
 *@s1: string 1
 *@s2: string 2
 *
 *Return: pointer to concatenated space
 */
char *_concat(char *concatenate, char *s1, char *s2)
{
	int concatcounter = 0;
	int stringcounter = 0;

	while (*(s1 + stringcounter) != '\0')
	{
		*(concatenate + concatcounter) = *(s1 + stringcounter);
		concatcounter++;
		stringcounter++;
	}

	stringcounter = 0;
	while (*(s2 + stringcounter) != '\0')
	{
		*(concatenate + concatcounter) = *(s2 + stringcounter);
		concatcounter++;
		stringcounter++;
	}
	*(concatenate + concatcounter) = '\0';
	return (concatenate);
}
