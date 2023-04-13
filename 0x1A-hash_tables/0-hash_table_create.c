#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


/**
 * hash_table_create - this function creates a hash table
 * @size: size of the array
 * Return: generated hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	unsigned long int i;

	hashTable = malloc(sizeof(*hashTable));
	if (hashTable == NULL)
		return (NULL);

	hashTable->size = size;
	hashTable->array = malloc(sizeof(*hashTable->array) * size);
	if (hashTable->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hashTable->array[i] = NULL;

	return (hashTable);
}
