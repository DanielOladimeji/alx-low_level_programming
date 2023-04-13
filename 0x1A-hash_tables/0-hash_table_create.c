#include <stdlib.h>
#include "hash_tables.h"


/**
 * hash_table_create - this function creates a hash table
 * @size: size of the array
 *
 * Return: generated hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *HTable = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (HTable == NULL || size == 0)
		return (NULL);
	HTable->size = size;
	HTable->array = (hash_node_t **)calloc(HTable->size, sizeof(hash_node_t *));
	if (HTable->array == NULL)
		return (NULL);

	for (i = 0; i < HTable->size; i++)
		HTable->array[i] = NULL;

	return (HTable);
}
