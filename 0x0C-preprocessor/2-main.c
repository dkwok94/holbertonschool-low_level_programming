#include <stdio.h>
/**
 *main - entry point
 *
 *Description: prints the name of the file the executable is compiled with
 *Return: 0 when successful
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
