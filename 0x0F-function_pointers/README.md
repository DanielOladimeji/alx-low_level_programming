0x0F-function_pointers Tasks



File 0-print_name.c: This is a function that prints a name.
	Prototype: void print_name(char *name, void (*f)(char *))



File 1-array_iterator.c: This is a function that executes a function given as a parameter on each element of an array.
	Prototype: void array_iterator(int *array, size_t size, void (*action)(int));



File 2-int_index.c:This is a function that searches for an integer.
	Prototype: int int_index(int *array, int size, int (*cmp)(int));



Files 3-calc.h, 3-op_functions.c, 3-get_op_func.c, 3-main.c are part of a program that performs simple operations.
	prototypes:

3-calc.h: This file should contain all the function prototypes and data structures used by the program. You can use this structure:


3-op_functions.c: This file contains the 5 following functions (not more):
	op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);

	op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);

	op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);

	op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);

	op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);


3-get_op_func.c: This file contains the function that selects the correct function to perform the operation asked by the users


3-main.c: This file contains main function only. 



File: 100-main_opcodes.c: A program that prints the opcodes of its own main function(Adbance task).



File function_pointers.h: This is the header file that contains all these functions' prototypes.
