#include "3-calc.h"
#include <stdio.h>

/**
 *op_add - adds numbers a and b
 *@a: first number
 *@b: second number
 *
 *Return: sum of a and b
 */
int op_add(int a, int b)
{
	int sum = 0;

	sum = a + b;
	return (sum);
}

/**
 *op_sub - subtracts numbers a and b
 *@a: first number
 *@b: second number
 *
 *Return: subtraction of a and b
 */
int op_sub(int a, int b)
{
	int difference = 0;

	difference = a - b;
	return (difference);
}

/**
 *op_mul - multiplies a and b
 *@a: first number
 *@b: second number
 *
 *Return: product of a and b
 */
int op_mul(int a, int b)
{
	int product = 0;

	product = a * b;
	return (product);
}

/**
 *op_div - divides a and b
 *@a: first number
 *@b: second number
 *
 *Return: the division of a and b
 */
int op_div(int a, int b)
{
	int division = 0;

	division = a / b;
	return (division);
}

/**
 *op_mod - returns remainder of division of a and b
 *@a: first number
 *@b: second number
 *
 *Return: the modulus of a and b
 */
int op_mod(int a, int b)
{
	int modulus = 0;

	modulus = a % b;
	return (modulus);
}
