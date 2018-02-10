#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: number of command line arguments
 *@argv: array of pointers to argument strings
 *
 *Description: prints minimum number of coins to make change
 *Return: Number of coins to make change for some amount of money
 */
int main(int argc, char *argv[])
{
	int money[] = {25, 10, 5, 2, 1};
	int i = 0;
	int moneycounter = 0;
	int cents;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("%d\n", 0);

	while (i < 5)
	{
		if (cents / money[i] != 0)
		{
			moneycounter += (cents / money[i]);
			cents = cents % money[i];
			i++;
		}

		else
			i++;
	}
	printf("%d\n", moneycounter);
}
