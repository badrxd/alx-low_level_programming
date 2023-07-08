#include "hash_tables.h"
/**
* shash_table_create -  function that creates a hash table.
* @size: size of hash table
*
* Return: return the pointer to the newly created hash table
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *tb = malloc(sizeof(shash_table_t));

	if (tb == NULL)
		return (NULL);
	tb->size = size;
	tb->shead = NULL;
	tb->stail = NULL;
	tb->array = malloc(sizeof(shash_node_t) * size);
	if (!tb->array)
	{
		free(tb);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		tb->array[i] = NULL;
	}
	return (tb);
}

/**
* creat_node - creat new node
* @key: the key
* @value: the value associated with the key.
*
* Return: return node if succeed, else NULL
*/
shash_node_t *creat_node(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

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
 * @s: to cheak if first time
 * Return: return 1 if succeed, else NULL
 */
shash_node_t *adds_an_element(shash_table_t *ht, const char *key,
			const char *value, unsigned long int index, int s)
{
	shash_node_t *node = creat_node(key, value);

	if (!node)
		return (0);
	if (s == 1)
		node->next = NULL;
	else
		node->next = ht->array[index];
	ht->array[index] = node;
	return (node);
}

/**
 * update_node - updates the value.
 * @node: a pointer to the node.
 * @value: the value.
 *
 * Return: 1 on success or 0 on fail.
 */
int update_node(shash_node_t *node, const char *value)
{
	if (strcmp(node->value, value) == 0)
		return (1);
	free(node->value);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (0);
	strcpy(node->value, value);
	return (1);
}


/**
 * set_head - sets the firs node in sorted list.
 * @ht: the hash table.
 * @node: the first node.
 *
 * Return:  1.
 */

int set_head(shash_table_t *ht, shash_node_t *node)
{
	node->sprev = NULL;
	node->snext = NULL;
	ht->shead = node;
	ht->stail = node;
	return (1);
}

/**
 * insert_node - insert a node by sorted position
 * @ht: pointer of the hash table.
 * @tmp: pointer the prev node in the sorted list.
 * @node: the node.
 *
 * Return: 1.
 */

int insert_node(shash_table_t *ht, shash_node_t *tmp, shash_node_t *node)
{
	if (tmp->sprev == NULL)
		ht->shead = node;
	node->snext = tmp;
	node->sprev = tmp->sprev;
	tmp->sprev = node;
	if (node->sprev != NULL)
		node->sprev->snext = node;
	return (1);
}

/**
 * insert_in_taile - insert a node in the end of the sorted list
 * @ht: pointer of the hash table.
 * @node: the node.
 *
 * Return: 1.
 */

int insert_in_taile(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp = ht->stail;

	node->sprev = tmp;
	node->snext = NULL;
	tmp->snext = node;
	ht->stail = node;
	return (1);
}

/**
* shash_table_set - adds or updates an element to sorted hashtable.
* @ht: pointer to hash table.
* @key: the key
* @value: the value associated with the key.
*
* Return: return node if succeed, else NULL
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *tmp;
	int s = 0;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (ht->array[index] == NULL)
	{
		s = 1;
		node = adds_an_element(ht, key, value, index, s);
	}
	else
	{
		while (!node)
		{
			if (strcmp(node->key, key) == 0)
				return (update_node(node, value));
			node = node->next;
		}
		node = adds_an_element(ht, key, value, index, s);
	}
	if (!node)
		return (0);
	if (!ht->shead)
		return (set_head(ht, node));
	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (strcmp(node->key, tmp->key) <= 0)
			return (insert_node(ht, tmp, node));
		tmp = tmp->snext;
	}
	return (insert_in_taile(ht, node));
}

/**
 * shash_table_get - get the value associated with the key.
 * @ht: pointer to the hash table array.
 * @key: the key.
 *
 * Return: the value associated with the key, or NULL if key can't be found.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
* shash_table_print - f.
* @ht: the hash table.
*
* Return: no return.
*/

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i, j;
	shash_node_t *node;

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

/**
 * shash_table_print_rev - prints sthe orted key & value in reverse.
 * @ht: the sorted hash table.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int count = 0;
	shash_node_t *node = ht->stail;

	if (ht == NULL)
		return;
	printf("{");
	while (node != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		count++;
	}
	printf("}\n");
}


#include "hash_tables.h"
/**
* shash_table_delete - function that deletes a hash table.
* @ht : the hash table.
*
* Return: no return.
*/

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node;
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
