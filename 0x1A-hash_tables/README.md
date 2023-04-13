0x1A. C - Hash tables

Task 0: A function that creates a hash table.
Prototype: hash_table_t *hash_table_create(unsigned long int size);


Task 1: A hash function implementing the djb2 algorithm.
Prototype: unsigned long int hash_djb2(const unsigned char *str);


Task 2: A function that gives you the index of a key
Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);


Task 3: A function that adds an element to the hash table.
Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);


Task 4: A function that retrieves a value associated with a key.
Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);


Task 5: A function that prints a hash table.
Prototype: void hash_table_print(const hash_table_t *ht);


Task 6: A function that deletes a hash table.
Prototype: void hash_table_delete(hash_table_t *ht);
