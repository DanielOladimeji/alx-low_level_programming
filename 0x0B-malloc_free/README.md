0x0B. C - malloc, free.


File: 0-create_array.c: A function that creates an array of chars, and initializes it with a specific char.
	Prototype: char *create_array(unsigned int size, char c);

File: 1-strdup.c: A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
	Prototype: char *_strdup(char *str);

File: 2-str_concat.c: A function that concatenates two strings.
	Prototype: char *str_concat(char *s1, char *s2);

File: 3-alloc_grid.c: A function that returns a pointer to a 2 dimensional array of integers.
	Prototype: int **alloc_grid(int width, int height);

File: 4-free_grid.c: A function that frees a 2 dimensional grid previously created by your alloc_grid function.
	Prototype: void free_grid(int **grid, int height);

File: 100-argstostr.c: A function that concatenates all the arguments of your program.
	Prototype: char *argstostr(int ac, char **av);

File: 101-strtow.c: A function that splits a string into words.
	Prototype: char **strtow(char *str);
