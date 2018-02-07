#include "holberton.h"
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: number to take the square root of
 *
 *Return: the natural square root of a number; -1 if there is no
 *natural square root.
 */
int _sqrt_recursion(int n)
{
	int g = 2;

	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (test(n, g));
}

/**
 *test - tests a divisor with n
 *@n: the number to take square root of
 *@g: the divisor
 *
 *Return: The square root (ie divisor such that n/g = g)
 */
int test(int n, int g)
{
	if ((g * g) > n)
		return (-1);

	if (((double) n / g) != g)
		return (test(n, g + 1));
	else
		return (g);
}
