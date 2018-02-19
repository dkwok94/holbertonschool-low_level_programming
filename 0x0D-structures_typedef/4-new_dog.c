#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *
 *Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *dupName;
	char *dupOwner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	dupName = _strdup(name);
	dupOwner = _strdup(owner);
	if (dupName == NULL || dupOwner == NULL)
	{
		free(dupName);
		free(dupOwner);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = dupName;
	new_dog->age = age;
	new_dog->owner = dupOwner;

	return (new_dog);
}

/**
 *_strdup - duplicates a string
 *@str: string to duplicate
 *
 *Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	int i = 0;
	int length = 0;
	char *string;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		length++;
		i++;
	}

	i = 0;
	string = malloc(sizeof(char) * (length + 1));

	if (string == NULL)
		return (NULL);

	while (i < length + 1)
	{
		*(string + i) = *(str + i);
		i++;
	}
	*(string + i) = '\0';
	return (string);
}
