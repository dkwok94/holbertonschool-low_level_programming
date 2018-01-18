#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Function will print all single digit numbers in a comma separated
 *list
 *Return: 0 upon successful completion
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
