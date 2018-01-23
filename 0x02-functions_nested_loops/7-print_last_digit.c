#include "holberton.h"
/**
 *print_last_digit - Prints last digit of n
 *@num: arbitrary number to be inputted into function
 *
 *Description: This program takes the last digit of a number and
 *prints it and returns the value of the last digit
 *Return: the value of the last digit of num
 */
int print_last_digit(int num)
{
	int lastdigit = num % 10;

	if (lastdigit < 0)
	{
		_putchar(-lastdigit + '0');
		return (-lastdigit);
	}
	else
	{
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
}
