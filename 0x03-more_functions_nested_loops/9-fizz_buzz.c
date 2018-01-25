#include <stdio.h>
/**
 *main - entry point
 *
 *Description: This program will print the numbers between 1 and 100
 *followed by a new line. For multiples of 3, the program will print
 *Fizz instead of the number. For multiples of 5, it will print Buzz.
 *If the numbers are multiples of both, it prints FizzBuzz.
 *Return: 0 upon successful completion
 */
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0 && (num % 5) != 0)
			printf("Fizz");

		else if ((num % 3) != 0 && (num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num != 100)
			printf(" ");

		num++;
	}
	printf("\n");
	return (0);
}
