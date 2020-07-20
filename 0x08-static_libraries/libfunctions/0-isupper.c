#include "dhk.h"
/**
 *_isupper - Checks for uppercase
 *@c: arbitrary character entered by user
 *
 *Description: This program will determine if a character is uppercase
 *Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
