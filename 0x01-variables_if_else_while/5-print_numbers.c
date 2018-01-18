#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: The function prints all single digit numbers of base 10 starting
 *from 0.
 *Return: 0 upon successful completion
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
