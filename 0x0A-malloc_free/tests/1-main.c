#include "dhk.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for DHK School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("DHK");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
