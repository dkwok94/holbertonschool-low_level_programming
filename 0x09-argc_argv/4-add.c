#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: number of command line arguments
 *@argv: array of pointers to argument strings
 *
 *Description: Adds positive numbers
 *Return: 0 when successful, 1 when there are no digits
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (i < argc)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
