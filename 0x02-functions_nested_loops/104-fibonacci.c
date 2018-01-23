#include <stdio.h>
/**
 *main - Fibonacci sequence
 *
 *Description: Prints the first 98 Fibonacci numbers
 *Return: 0 upon successful completion
 */
int main(void)
{
	int nthfibonacci = 3;
	long double fibonacci;
	long double nminus2 = 1;
	long double nminus1 = 2;

	printf("%.0Lf, ", nminus2);
	printf("%.0Lf, ", nminus1);

	while (nthfibonacci <= 98)
	{
		fibonacci = nminus2 + nminus1;
		printf("%.0Lf", fibonacci);
		if (nthfibonacci < 98)
			printf(", ");
		nminus2 = nminus1;
		nminus1 = fibonacci;
		nthfibonacci++;
	}
	printf("\n");
	return (0);
}
