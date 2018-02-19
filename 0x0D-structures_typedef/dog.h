#ifndef DOG_H
#define DOG_H
/**
 *struct dog - data about a dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *
 *Description: defines a dog's name, age, and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strdup(char *str);
#endif
