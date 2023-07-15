#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#include <stddef.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* linear search algorithm */
int linear_search(int *array, size_t size, int value);

/* binary search algorithm */
int binary_search(int *array, size_t size, int value);

/* help binary algorithm */
int help_binary(int *array, int value, size_t lo, size_t hi);

/* jump search algorithm */
int jump_search(int *array, size_t size, int value);

/* advanced binary algorithm */
int advanced_binary(int *array, size_t size, int value);

/* interpolation search algorithm */
int interpolation_search(int *array, size_t size, int value);

/* exponential search algorithm */
int exponential_search(int *array, size_t size, int value);

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

listint_t *jump_list(listint_t *list, size_t size, int value);

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
