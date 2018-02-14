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
	int aindex = 0;
	int wcount = 0;
	char **array;
	int letters;
	int startofword;

	if (str == NULL || *str == '\0')
		return (NULL);

	wcount = wordcount(str);

	array = malloc(sizeof(char *) * (wcount + 1));
	if (array == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		if (*(str + i) == ' ')
			i++;

		else
		{
			startofword = i;
			letters = lettercount(startofword, str);
			array[aindex] = malloc(sizeof(char) * (letters + 1));
			if (array[aindex] == NULL)
				return (NULL);
			i = fillarray(startofword, str, array[aindex]);
			aindex++;
		}
	}
	array[wcount - 1] = NULL;
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

	while (*(str + i) != ' ')
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

	while (*(str + i) != ' ')
	{
		*(array + counter) = *(str + i);
		i++;
		counter++;
	}
	*(array + counter) = '\0';
	return (i);
}
