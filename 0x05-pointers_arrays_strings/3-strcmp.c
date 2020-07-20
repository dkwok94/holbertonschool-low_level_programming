#include "dhk.h"
/**
 *_strcmp - compares two strings
 *@s1: string 1
 *@s2: string 2
 *
 *Return: negative difference if s1 is less than s2, positive
 *difference if s1 is greater than s2, or 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}

	if ((*s1 == '\0') && (*s2 == '\0'))
		return (0);
	else if (*s1 > *s2)
		return ((int)(*s1 - *s2));
	else
		return ((int)(*s1 - *s2));
}
