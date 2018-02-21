#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *get_op_func - returns a pointer to a function
 *@s: operator passed as argument
 *
 *Description: looks at sign argument and returns a pointer to function
 *Return: a pointer to a function that takes two ints and returns an int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	if (s == NULL)
		return (NULL);

	while ((ops[i]).op != NULL)
	{
		if (*s == (ops[i]).op[0])
			return ((ops[i]).f);
		i++;
	}
	return (NULL);
}
