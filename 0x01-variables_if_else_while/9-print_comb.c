#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Function will print all single digit numbers in a comma
 *separated list without the use of any char variables.
 *Return: 0 upon successful completion
 */
int main(void)
{
	int num = '0';

	while (num <= '0')
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
