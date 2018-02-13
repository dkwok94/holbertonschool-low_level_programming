#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *argstostr - concatenates arguments of the program
 *@ac: number of command line arguments
 *@av: array of pointers to command argument strings
 *
 *Return: pointer to concatenated
 */
char *argstostr(int ac, char **av)
{
	int length = findlength(ac, av);
	char *concatstr;

	if (ac == 0 || av == NULL)
		return (NULL);

	concatstr = malloc(sizeof(char) * length);
	return (writeconcat(concatstr, ac, av));

}

/**
 *findlength - finds the total length of the concatenated string
 *@ac: number of command line arguments
 *@av: array of "strings"
 *
 *Return: the total length the concat needs to be including \n and \0
 */
int findlength(int ac, char **av)
{
	int i, j;
	int length = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++)
		{
			length++;
		}
	}
	length += (ac + 1);
	return (length);
}

/**
 *writeconcat - writes the contents of the arguments to concat string
 *@concatstr: concatenated string pointer
 *@ac: number of command line arguments
 *@av: array of pointers to argument strings
 *
 *Return: pointer to concatenated array
 */
char *writeconcat(char *concatstr, int ac, char **av)
{
	int i;
	int j;
	int concatcount = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++)
		{
			*(concatstr + concatcount) = *(av[i] + j);
			concatcount++;
		}
		*(concatstr + concatcount) = '\n';
		concatcount++;
	}
	*(concatstr + concatcount) = '\0';
	return (concatstr);
}
