#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Program will print numbers from 00 to 99 in ascending order
 *as a comma separated list using NO char data types.
 *Return: 0 when successfully run to completion
 */
int main(void)
{
	int num = 0;

	while (num < 100)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');
		if (num != 99)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
