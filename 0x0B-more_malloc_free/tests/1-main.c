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
    char *concat;

    concat = string_nconcat("DHK ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
