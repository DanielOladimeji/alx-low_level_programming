/**
 * _strncpy -  function that copies a string
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: bytes of @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * loop through src array
	 * where there is no null byte in the first n bytes of source
	 * string placed in dest won't be null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the lngth of co=source is less than n,
	 * write additional null bytes to dest
	 * to ensure that a total of n byte is wtitten
	 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
