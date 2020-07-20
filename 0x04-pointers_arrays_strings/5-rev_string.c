#include "dhk.h"
/**
 *rev_string - reverses a string
 *@s: String to reverse
 *
 *Description: Reverses a string directly at its pointer address
 *Return: void
 */
void rev_string(char *s)
{
	int index = 0;
	int revindex = 0;
	int temp;
	char *origin = s;

	while (*s != '\0')
	{
		revindex++;
		s++;
	}
	revindex--;

	while (index <= revindex)
	{
		temp = *(origin + index);
		*(origin + index) = *(origin + revindex);
		*(origin + revindex) = temp;
		index++;
		revindex--;
	}
}
