#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */
int main(void)
{
	int nthfibonacci = 3;
	unsigned long long fibonacci;
	unsigned long long nminus1 = 1;
	unsigned long long nminus2 = 0;

	printf("%llu, ", nminus2);
	printf("%llu, ", nminus1);

	while (nthfibonacci <= 50)
	{
		fibonacci = nminus1 + nminus2;
		printf("%llu", fibonacci);
		if (nthfibonacci < 50)
			printf(", ");
		nminus2 = nminus1;
		nminus1 = fibonacci;
		nthfibonacci++;
	}
	printf("\n");
	return (0);
}
