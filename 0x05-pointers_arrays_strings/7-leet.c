#include "dhk.h"
#define NUMREPLCHAR 5
/**
 *leet - encodes a string to 1337
 *@str: string passed in
 *
 *Return: pointer to string
 */
char *leet(char *str)
{
	char repl[5] = {'4', '3', '0', '7', '1'};
	char chars[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int charcounter = 0;
	int replcounter = 0;
	char *origin = str;

	while (replcounter < NUMREPLCHAR)
	{
		while (*str != '\0')
		{
			if (*str == chars[charcounter] ||
			    *str == chars[charcounter + 1])
				*str = repl[replcounter];
			str++;
		}
		str = origin;
		charcounter += 2;
		replcounter++;
	}
	return (origin);
}
