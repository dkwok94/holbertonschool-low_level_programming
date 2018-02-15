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
	int i = 0, wcount = 0, aindex = 0;
	int letters, startofword;
	char **array;

	if (str == NULL || *str == '\0')
		return (NULL);

	wcount = wordcount(str);
	if (wcount == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (wcount + 1));
	if (array == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		if (*(str + i) == ' ' || *(str + i) == '\t')
			i++;
		else
		{
			startofword = i;
			letters = lettercount(startofword, str);
			array[aindex] = malloc(sizeof(char) * (letters + 1));
			if (array[aindex] == NULL)
			{
				while (aindex >= 0)
				{
					free(array[aindex]);
					aindex--;
				}
				free(array);
				return (NULL);
			}
			i = fillarray(startofword, str, array[aindex]);
			aindex++;
		}
	}
	array[aindex] = NULL;
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
		if (*(str + i) == ' ' || *(str + i) == '\t')
			i++;

		else
		{
			wcount++;
			while (*(str + i) != ' ' && *(str + i) != '\t')
				i++;
		}
	}
	return (wcount);
}

/**
 *lettercount - allocates memory and adds string to it
 *@i: index where the word in the string begins
 *@str: string of interest
 *
 *Return: the position of string right after the word
 */
int lettercount(int i, char *str)
{
	int letters = 0;

	while (*(str + i) != ' ' && *(str + i) != '\t')
	{
		letters++;
		i++;
	}
	return (letters);
}

/**
 *fillarray - fills the array with a word
 *@i: the index where the word starts
 *@str: the string to separate
 *@array: the array to write to
 *
 *Return: location where the word ends
 */
int fillarray(int i, char *str, char *array)
{
	int counter = 0;

	while (*(str + i) != ' ' && *(str + i) != '\t')
	{
		*(array + counter) = *(str + i);
		i++;
		counter++;
	}
	*(array + counter) = '\0';
	return (i);
}
