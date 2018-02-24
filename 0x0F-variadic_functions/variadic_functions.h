#ifndef VAR_FUNC_H
#define VAR_FUNC_H
#include <stdarg.h>
/**
 *struct datatype - defines a character representing a data type
 *@character: the character representing some data type
 *@printop: function that prints that data type in correct format
 *
 *Description: This structure contains a character that corresponds to
 *a data type and returns a function pointer to a print function for that
 *data type.
 */
typedef struct datatype
{
	char *character;
	void (*printop)(va_list);
} type_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#endif
