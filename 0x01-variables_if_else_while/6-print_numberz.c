#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Program prints the single digit numbers in base 10 without using
 *chars
 *Return: 0 upon successful completion
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
