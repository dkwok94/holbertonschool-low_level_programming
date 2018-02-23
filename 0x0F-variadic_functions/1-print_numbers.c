#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - prints numbers followed by new line
 *@separator: string to be printed between numbers
 *@n: number of variable arguments
 *
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numlist;
	unsigned int i = 0;

	if (separator == NULL)
		separator = "";

	va_start(numlist, n);
	while (i < n)
	{
		printf("%d", va_arg(numlist, unsigned int));
		if (i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(numlist);
}
