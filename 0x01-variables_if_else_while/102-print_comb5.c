#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This program will print each unique combination of two numbers
 *from 00 to 99 as two digit numbers separated by a space. The numbers will be
 *in a comma separated list.
 *Return: 0 when successfully run to completion.
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 < 100; n1++)
	{
		for (n2 = n1 + 1; n2 < 100; n2++)
		{
			putchar((n1 / 10) + '0');
			putchar((n1 % 10) + '0');
			putchar(' ');
			putchar((n2 / 10) + '0');
			putchar((n2 % 10) + '0');
			if (n1 != 98 || n2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
