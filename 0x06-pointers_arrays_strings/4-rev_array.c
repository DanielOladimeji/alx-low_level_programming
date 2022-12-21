/**
 * reverse_array -  function that reverses
 * the content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int tmp, x, y;

	x = 0;
	y = n - 1;
	/**
	 * set value in array a in tmp then
	 * place the last array in the
	 * first array then place
	 * value in temp to last array
	 */
	while (x < y)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		x++;
		y--;
	}
}
