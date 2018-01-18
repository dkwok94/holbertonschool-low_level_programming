#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This program prints all letters from a-z in lower case
 *Return: Returns 0 upon successful completion
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
