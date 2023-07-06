#include "hash_tables.h"

/**
* hash_table_create-  function that creates a hash table.
* @size: size of hash table
*
* Return: return the pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *tb;

	tb = malloc(sizeof(hash_node_t));

	if (!tb)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	tb->size = size;
	tb->array =  malloc(sizeof(hash_node_t *) * size);

	if (!tb->array)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		tb->array[i] = NULL;
	}
	return (tb);
}
