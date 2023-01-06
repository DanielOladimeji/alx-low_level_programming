/**
 * _strcat - function that concatenates two stirngs
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int x, x2;

	x = 0;
	/** find the size of the dest array*/
	while (dest[x])
		x++;

	/* loop through each src array without the null byte*/
	for (x2 = 0; src[x2] ; x2++)
		/*append src[x2] to dest[x] while overwriting the null byte in dest*/
		dest[x++] = src[x2];

	return (dest);
}
