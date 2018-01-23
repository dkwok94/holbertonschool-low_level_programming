#include <stdio.h>
/**
 *main - Multiple of 3 and 5 sum calculator
 *
 *Description: This program prints the sum of all multiples of 3
 *and 5 up to and excluding 1024 followed by a new line.
 *Return: 0 upon successful completion
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
		/*Avoid double counting*/
		if ((product_5 % 3) != 0)
			sum += product_5;

		counter++;
		product_5 = 5 * counter;
	}
	printf("%d\n", sum);
	return (0);
}
