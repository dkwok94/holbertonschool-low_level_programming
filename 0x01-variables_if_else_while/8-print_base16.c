#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Program prints all base 16 characters followed by a new line
 *Return: 0 upon successful completion
 */
int main(void)
{
	char num = '0';
	char letter = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
