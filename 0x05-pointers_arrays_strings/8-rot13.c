#include "holberton.h"
/**
 *rot13 - encrypts a string in rot13
 *@str: string to encrypt
 *
 *Return: pointer to the encrypted string
 */
char *rot13(char *str)
{
	char *start = str;
	char original[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char replacement[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;

	while (*str != '\0')
	{
		while ((*str != original[i]) && original[i] != '\0')
		{
			i++;
		}
		if (original[i] != '\0')
			*str = replacement[i];
		str++;
		i = 0;
	}
	return (start);
}
