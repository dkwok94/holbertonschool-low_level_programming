#include "holberton.h"
/**
 *_abs - Returns the absolute value of n
 *@n: arbitrary integer value
 *
 *Description: This program will return the absolute value of a number
 *Return: +n if n is positive, -n if n is negative
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
