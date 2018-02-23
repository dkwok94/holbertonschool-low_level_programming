#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_strings - prints strings followed by a new line
 *@separator: string to be printed between strings
 *@n: number of variadic arguments
 *
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stringlist;
	unsigned int i = 0;
	char *string;

	if (separator == NULL)
		separator = "";

	va_start(stringlist, n);
	while (i < n)
	{
		string = va_arg(stringlist, char *);
		if (*string == '\0')
			printf("(nil)");
		else
			printf("%s", string);
		if (i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(stringlist);
}
