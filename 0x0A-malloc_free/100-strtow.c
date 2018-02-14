#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *strtow - splits a string into words
 *@str: string to split
 *
 *Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i = 0;
	int arrayindex = 0;
	int wcount = 0;
	char **array;

	if (str == NULL || *str == '\0')
		return (NULL);

	wcount = wordcount(str);

	array = malloc(sizeof(char *) * wcount);

	while (*(str + i) != '\0')
	{
		if (*(str + i) == ' ')
			i++;

		else
		{
			i = addword(i, str, array[arrayindex]);
			arrayindex++;
		}
	}
	return (array);
}

/**
 *wordcount - counts the number of words in the string
 *@str: string to count over
 *
 *Return: the number of words
 */
int wordcount(char *str)
{
	int i = 0;
	int wcount = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) == ' ')
			i++;

		else
		{
			wcount++;
			while (*(str + i) != ' ')
				i++;
		}
	}
	return (wcount);
}

int addword(int i, char *str, char *array)
{
	int counter = 0;
	int lettercount = 0;

	counter = i;
	while (*(str + counter) != ' ')
	{
		lettercount++;
		counter++;
	}

	array = malloc(sizeof(char) * (lettercount + 1));

	counter = 0;
	while (*(str + i) != ' ')
	{
		*(array + counter) = *(str + i);
		i++;
		counter++;
	}
	*(array + counter) = '\0';
	return (i);
}
