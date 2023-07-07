#include "hash_tables.h"
/**
* hash_table_delete - function that deletes a hash table.
* @ht : the hash table.
*
* Return: no return.
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			ht->array[i] = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = ht->array[i];
		}
	}
	free(ht->array);
	free(ht);
}
