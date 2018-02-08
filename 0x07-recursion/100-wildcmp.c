#include "holberton.h"
/**
 *wildcmp - compares 2 strings for similarity
 *@s1: first string
 *@s2: second string
 *
 *Return: 1 if the two strings are the same, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	char *origin = s1;

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
	{
		s1++;
		s2++;
		return (wildcmp(s1, s2));
	}

	else if (*s2 == '*')
		return (asterisks(s1, s2, origin));

	else
		return (0);
}

/**
 *asterisks - iterates over asterisks and decides on activity
 *@s1: first string
 *@s2: second string
 *@origin: keep track of starting pointer s1
 *
 *Return: 1 if the strings are the same, 0 if not
 */
int asterisks(char *s1, char *s2, char *origin)
{

	if (*s2 == '*')
	{
		s2++;
		return (asterisks(s1, s2, origin));
	}

	else if (*s2 == '\0')
	{
		if (*s1 == *origin)
			return (1);
		if (*s2 != *s1)
			return (0);
		else
			return (1);
	}

	else
	{
		if (*s1 != *s2)
		{
			s1++;
			return (asterisks(s1, s2, origin));
		}

		else if (*s1 == '\0')
			return (0);

		else
		{
			s1++;
			s2++;
			return (asterisks(s1, s2, origin));
		}
	}
}
