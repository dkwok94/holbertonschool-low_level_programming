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
	int sum = 0;
	int counter = 1;
	int product_3 = 3;
	int product_5 = 5;

	while (product_3 < 1024)
	{
		sum += product_3;
		counter++;
		product_3 = 3 * counter;
	}

	counter = 1;
	while (product_5 < 1024)
	{
		sum += product_5;
		counter++;
		product_5 = 5 * counter;
	}
	printf("%d\n", sum);
}
