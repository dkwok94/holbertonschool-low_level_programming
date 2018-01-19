#include <stdio.h>
/**
 *main
 *
 *Description:
 *Return:
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
