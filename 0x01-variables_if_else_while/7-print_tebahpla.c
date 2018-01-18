#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This program prints the letters in reverse order
 *Return: 0 upon successful completion
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
