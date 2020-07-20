#include "dhk.h"
#include <stdio.h>
/**
 *_strstr - locates a substring
 *@haystack: total string
 *@needle: substring to look for
 *
 *Return: pointer to beginning of located substring
 *or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *needlepos;
	char *needlestart = needle;

	for (; *haystack != '\0'; haystack++)
	{
		for (needlepos = haystack; *needle != '\0'; needle++)
		{
			if (*needlepos == *needle)
				needlepos++;
			else
			{
				haystack = needlepos;
				needle = needlestart;
				break;
			}
		}
		if (*needle == '\0')
			return (haystack);
	}
	return (NULL);
}
