#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - function frees dogs
 *@d: pointer to a dog structure
 *
 *Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
