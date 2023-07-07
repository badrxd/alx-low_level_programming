#include "hash_tables.h"
/**
* hash_table_print - f.
* @ht: the hash table.
*
* Return: no return.
*/


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *node;

	j = 0;
	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (j == 1)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				j = 1;
			}
		}
		printf("}\n");
	}
}
