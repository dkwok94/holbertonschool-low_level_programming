#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sums of the two diagonals of an array
 *@a: array used
 *@size: size of the array
 *
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int leftsum = 0;
	int rightsum = 0;
	int rows = 0;
	int columnfromzero = 0;
	int columnfromsize = size - 1;

	while (rows < size)
	{
		leftsum += *(a + (rows * size) + columnfromzero);
		rightsum += *(a + (rows * size) + columnfromsize);
		columnfromzero++;
		columnfromsize--;
		rows++;
	}
	printf("%d, %d\n", leftsum, rightsum);
}
