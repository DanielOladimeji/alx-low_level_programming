/**
 * swap_int - swaps the values of two integers
 * with two input parameters
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
