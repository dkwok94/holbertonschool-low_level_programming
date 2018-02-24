#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *printchar - prints a character argument
 *@list: the va_list of arguments passed to function
 *
 *Return: void
 */
void printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 *printint - prints an integer argument
 *@list: the va_list of arguments passed to function
 *
 *Return: void
 */
void printint(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 *printfloat - prints a float argument
 *@list: the va_list of arguments passed to function
 *
 *Return: void
 */
void printfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 *printstring - prints a string argument
 *@list: the va_list of arguments passed to function
 *
 *Return: void
 */
void printstring(va_list list)
{
	char *string;

	string = va_arg(list, char *);
	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}

/**
 *print_all - prints anything in a list of arguments
 *@format: list of types of arguments passed in
 *
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list printlist;
	int i, formatcount = 0;
	char *sep1 = "";
	char *sep2 = ", ";
	char *sep = sep1;
	type_t datatype[] = {
		{"c", printchar},
		{"i", printint},
		{"f", printfloat},
		{"s", printstring},
		{NULL, NULL} };

	va_start(printlist, format);
	while (format[formatcount] != '\0')
	{
		i = 0;
		while (datatype[i].character != NULL)
		{
			if (format[formatcount] == *(datatype[i].character))
			{
				printf("%s", sep);
				(datatype[i].printop)(printlist);
				sep = sep2;
			}
			i++;
		}
		formatcount++;
	}
	printf("\n");
	va_end(printlist);
}
