#include <stdio.h>
#include "dhk.h"
/**
 *print_to_98 - prints numbers in increasing order to 98
 *@n: arbitrary number signifying starting point
 *
 *Description: prints the numbers in increasing order starting from
 *n all the way up to 98
 *Return: 0 upon successful completion
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
		printf("\n");
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
		printf("\n");
	}
	else
	{
		printf("%d", n);
		printf("\n");
	}
}
