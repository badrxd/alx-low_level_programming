#include "hash_tables.h"


/**
* creat_node - creat new node
* @key: the key
* @value: the value associated with the key.
*
* Return: return node if succeed, else NULL
*/
hash_node_t *creat_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);
	node->key = (char *)malloc(strlen(key) + 1);
	if (!node->key)
		return (NULL);
	node->value = (char *)malloc(strlen(value) + 1);
	if (!node->value)
		return (NULL);
	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node);
}


/**
 * adds_an_element - (no collision) set key:value pair to array
 * @ht: pointer to the hashtable.
 * @key: the key.
 * @value: the value associated with the key.
 * @index: the position in the array
 *
 * Return: return 1 if succeed, else NULL
 */
int adds_an_element(hash_table_t *ht, const char *key, const char *value,
			unsigned long int index)
{
	hash_node_t *node = creat_node(key, value);

	if (!node)
		return (0);
	node->next = NULL;
	ht->array[index] = node;
	return (1);
}


/**
 * hash_table_set - adds an element to the hashtable.
 * @ht: a pointer to the hashtable array.
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: 1 on success or 0 on error.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		adds_an_element(ht, key, value, index);
		return (1);
	}
	else
	{
		printf("problem");
		return (0);
	}

}
