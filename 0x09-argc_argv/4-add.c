#include <stdio.h>
#include <stdlib.h>
#include "dhk.h"
/**
 *main - entry point
 *@argc: number of command line arguments
 *@argv: array of pointers to argument strings
 *
 *Description: Adds positive numbers
 *Return: 0 when successful, 1 when there are no digits
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j;
	int sum = 0;
	int isnum;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (i < argc)
	{
		j = 0;
		isnum = checknum(j, &(*argv[i]));
		if (isnum == 1)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

/**
 *checknum - checks if an argument is a number
 *@j: counter for iteration over string
 *@str: string to iterate over
 *
 *Return: 1 if number, 0 if not a number
 */
int checknum(int j, char *str)
{
	while (str[j] != '\0')
	{
		if (str[j] > '9' || str[j] < '0')
			return (0);
		j++;
	}
	return (1);
}
