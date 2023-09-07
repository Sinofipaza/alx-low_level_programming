#include "hash_tables.h"
#include <string.h>

/**
  * hash_table_get - retrieves value associated with key
  * @ht: hash table
  * @key: key to search for
  * Return: value associated with element
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (!ht)
		return (NULL);
	node = ht->array[key_index((const unsigned char *)key, ht->size)];
	for (; node; node = node->next)
		if (strcmp(node->key, key) == 0)
			return (node->value);
	return (NULL);
}
