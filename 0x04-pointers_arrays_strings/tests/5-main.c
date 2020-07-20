#include "dhk.h"
#include <stdio.h>

/**
 * main - check the code for DHK School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[10] = "DHK";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
