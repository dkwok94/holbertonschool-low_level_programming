#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: number of command line arguments
 *@argv: array of pointers to argument strings
 *
 *Description: multiplies two numbers
 *Return: 0 upon successful completion
 */
int main(int argc, char **argv)
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		product = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", product);
		return (0);
	}
}
