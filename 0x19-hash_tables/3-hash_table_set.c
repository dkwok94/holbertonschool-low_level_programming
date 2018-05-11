#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table
 *@ht: the hash table to add or update to
 *@key: the key string
 *@value: the value associated with the key
 *
 *Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;
	hash_node_t *temp;

	if (ht == NULL)
		return (0);
	if (key == NULL || key[0] == '\0')
		return (0);
	if (ht->size == 0 || ht->array == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = (char *)value;
			return (1);
		}
		temp = temp->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = (char *)key;
	new->value = (char *)value;

	if (ht->array[index] != NULL)
		new->next = ht->array[index];
	else
		new->next = NULL;

	ht->array[index] = new;
	return (1);
}
