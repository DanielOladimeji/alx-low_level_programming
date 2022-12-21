/**
 * _strncat - function that concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, i;

	x = 0;

	/* find size of dest array */
	while (dest[x])
		x++;

	/**
	 * src may not be null terminated
	 * if it contains n or more bytes
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	/* null terminate dest */
	dest[x + i] = '\0';

	return (dest);
}
