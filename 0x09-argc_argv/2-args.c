#include <stdio.h>
/**
 *main - entry point
 *@argc: number of command line arguments
 *@argv: array of pointers to argument strings
 *
 *Description: Prints the arguments it receives
 *Return: 0 when successfully completed
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
