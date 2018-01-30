#include "holberton.h"
#include <stdio.h>
/**
 *_atoi - converts a string to an integer
 *@s: string to convert to integer
 *
 *Return: the integer value of the converted string
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int tens = 1;
	unsigned int integer = 0;
	int isnegative = 0;
	int numnegs = 0;
	int numpos = 0;

	while ((s[i] > '9' || s[i] < '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			numnegs++;
		if (s[i] == '+')
			numpos++;
		i++;
	}
	if (numnegs > numpos)
		isnegative = 1;

	tens = findtensplaces(i, s);
	while (s[i] >= '0' && s[i] <= '9')
	{
		integer += ((s[i] - '0') * tens);
		tens /= 10;
		i++;
	}
	if (isnegative == 1)
		integer *= -1;

	return (integer);
}

/**
 *findtensplaces - finds the multiplication factor of tens
 *@i: the index of where a number starts in the string
 *@s: the string pointer
 *
 *Return: the tens multiplier
 */
unsigned int findtensplaces(int i, char *s)
{
	unsigned int tens = 1;

	while (s[i] >= '0' && s[i] <= '9')
	{
		tens *= 10;
		i++;
	}
	tens /= 10;
	return (tens);
}
