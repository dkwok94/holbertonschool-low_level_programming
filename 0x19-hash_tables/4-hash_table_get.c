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
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || key[0] == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (ht->array[index] == NULL)
		return (NULL);
	else /*Check if there is a linked list entry*/
	{
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
				return (node->value);

			else
				node = node->next;
		}
		return (NULL);
	}
}
