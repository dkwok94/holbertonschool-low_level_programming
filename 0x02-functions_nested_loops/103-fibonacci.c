#include <stdio.h>
/**
 *main - Fibonacci even numbers
 *
 *Description: This program will print the sum of all even Fibonacci numbers
 *up to 4 million
 *Return: 0 upon successful completion
 */
int main(void)
{
	unsigned long fibonacci;
	unsigned long nminus2 = 1;
	unsigned long nminus1 = 2;
	unsigned long sum = 2;

	fibonacci = nminus2 + nminus1;
	while (fibonacci < 4000000)
	{
		if ((fibonacci % 2) == 0)
			sum += fibonacci;
		nminus2 = nminus1;
		nminus1 = fibonacci;
		fibonacci = nminus2 + nminus1;
	}
	printf("%lu\n", sum);
	return (0);
}
