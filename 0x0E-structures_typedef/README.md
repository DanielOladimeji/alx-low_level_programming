0x0E-structures_typedef


File dog.h: This is a header file containing a new type "struct dog" with the following elements:

	name, type = char *
	age, type = float
	owner, type = char *

File 1-init_dog.c: This is a function that initialize a variable of type struct dog.
	Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

File 2-print_dog.c: This is a function that prints a struct dog.
	Prototype: void print_dog(struct dog *d);

File 4-new_dog.c: This is a function that creates a new dog.
	Prototype: dog_t *new_dog(char *name, float age, char *owner);

File 5-free_dog.c: This is a function that frees dogs.
Prototype: void free_dog(dog_t *d);
