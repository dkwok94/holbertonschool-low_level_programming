#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This program prints all combinations of 3 numbers without
 *repeating any combinations and only displaying the lowest value
 *combination. For example (012, 120, 102, 021, etc are all the same
 *combination but only 012 will be printed).
 *Return: 0 upon successful completion
 */
int main(void)
{
	int first = 0;
	int second = 1;
	int third = 0;
	int skips = 2;
	int loopcount = 1;

	while (first <= 7)
	{
		while (second <= 8)
		{
			third += skips;
			while (third <= 9)
			{
				putchar(first + '0');
				putchar(second + '0');
				putchar(third + '0');
				third++;
				if (first != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			third = 0;
			skips++;
			second++;
		}
		first++;
		loopcount++;
		second = loopcount;
		skips = loopcount + 1;
	}
	putchar('\n');
	return (0);
}
