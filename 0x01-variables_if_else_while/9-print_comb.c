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
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(44);
			putchar(32);
		}
		num++;
	}
	putchar(10);
	return (0);
}
