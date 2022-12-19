/**
 * rev_string -  reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int l, i;
	char az;

	/* find string length without null char */
	for (l = 0; s[l] != '\0'; ++l)
		;

	/* swap the string b\y looping to half the string */
	for (i = 0; i < 1 / 2; ++i)
	{
		az = s[i];
		s[i] = s[l - 1 - i]; /* -1 is used because the array starts from 0 */
		s[l - 1 - i] = az;
	}
}
