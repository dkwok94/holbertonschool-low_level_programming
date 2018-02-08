#include "holberton.h"
/**
 *is_palindrome - analyzes if a string is a palindrome
 *@s: string to be analyzed
 *
 *Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	char *start = s;
	int counter = strlength(s) - 1;

	s = start;
	return (iteratepalindrome(s, start, counter));
}

/**
 *strlength - finds string length recursively
 *@s: string to find length of
 *
 *Return: String length
 */
int strlength(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + strlength(s));
}

/**
 *iteratepalindrome - iterates over a string to check for palindrome
 *@s: string to iterate over
 *@start: keeps track of starting point of string
 *@counter: upper end counter
 *
 *Return: 1 if palindrome, 0 if not palindrome
 */
int iteratepalindrome(char *s, char *start, int counter)
{
	if (counter > 0)
	{
		if (*s == *(start + counter))
			return (iteratepalindrome(s + 1, start, counter - 1));
		else
			return (0);
	}
	else
		return (1);
}
