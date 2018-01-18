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
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar(10);
	return (0);
}
