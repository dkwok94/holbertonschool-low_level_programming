#include "hash_tables.h"
/**
 *hash_table_get - retrieves a value associated with a key
 *@ht: the hash table pointer
 *@key: the key string
 *
 *Return: the associated value element or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value;
	if (ht == NULL)
		return (NULL);
	if (key == NULL || key[0] == '\0')
		return (NULL);

	if (ht->size == 0 || ht->array == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	else
		value = ht->array[index]->value;
	return (value);
}
