#include "hash_tables.h"
/**
* hash_table_get - function that retrieves a value associated with a key.
* @ht: pointer to the hash table.
* @key: pointer to the node key
*
* Return: return value or Null if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			value = node->value;
			break;
		}
		node = node->next;
	}
	if (!node)
		return (NULL);
	return (value);
}
