#include <stdio.h>
/**
 *main - Prints the size of several data types
 *
 *Description: The function will print the size of char, int, long int,
 *long long int, and float data types.
 *Return: 0 if the function went through to completion successfully
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu byte(s)\n", (long int) sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (long int) sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (long int) sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (long int) sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (long int) sizeof(f));
	return (0);
}
