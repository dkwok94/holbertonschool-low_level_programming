#include <stdio.h>

int main(void)
{
	char *string = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	while(*string != '\0')
	{
		putchar(*string);
		string++;
	}
	return (1);
}
