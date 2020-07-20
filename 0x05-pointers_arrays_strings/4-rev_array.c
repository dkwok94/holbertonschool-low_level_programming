#include "dhk.h"
/**
 *reverse_array - reverses array of integers
 *@a: integer array
 *@n: number of elements in array
 *
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int temp = 0;
	int i = 0;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}
}
