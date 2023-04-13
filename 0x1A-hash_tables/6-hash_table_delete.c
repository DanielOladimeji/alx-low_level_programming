#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *current;
	unsigned long int i;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				current = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = current;
			}
		}
		free(ht->array);
		free(ht);
	}
}
