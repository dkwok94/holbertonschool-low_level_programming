#include "dhk.h"
/**
 *_islower - Decides if a character is lowercase letter
 *@c: arbitrary character
 *
 *Description: This function returns 1 if the character is lowercase
 *and 0 if the character is not lowercase
 *Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
