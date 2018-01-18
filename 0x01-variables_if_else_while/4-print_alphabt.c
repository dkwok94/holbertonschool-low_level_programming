#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This program will print all letters in lowercase except for
 *q and e.
 *Return: 0 upon successful completion
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
			letter++;
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
