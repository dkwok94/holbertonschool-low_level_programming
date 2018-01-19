#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This program will print a comma separated list of all
 *possible combinations of 2 numbers with no combinations repeated
 *and the smallest valued combination appearing in the list over the
 *others. For example (01 and 10 are the same combination and 01 will
 *appear instead of 10 in the list).
 *Return: 0 upon successful completion
 */
int main(void)
{
	int first = 0;
	int second = 0;
	int skips = 1;

	while (first <= 8)
	{
		second += skips;
		while (second <= 9)
		{
			putchar(first + '0');
			putchar(second + '0');
			if (first != 8)
			{
				putchar(',');
				putchar(' ');
			}
			second++;
		}
		second = 0;
		skips++;
		first++;
	}
	putchar('\n');
	return (0);
}
