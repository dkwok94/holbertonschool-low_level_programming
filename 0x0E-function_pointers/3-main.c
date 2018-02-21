#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - entry point
 *@ac: number of command line arguments
 *@av: array of pointers to strings of cmd line arguments
 *
 *Description: performs an operation on two numbers
 *Return: 0 when successful, something else otherwise
 */
int main(int ac, char **av)
{
	int a, b;
	int number;
	int (*operation)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}


	if ((*av[2] == '/' || *av[2] == '%') && *av[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);
	operation = get_op_func(av[2]);

	number = operation(a, b);
	printf("%d\n", number);
	return (0);
}
