/**
 * leet -  function that encodes a string into 1337
 *
 * @s: stirng input
 *
 * Return: s
 */

char *leet(char *s)
{
	int i, x = 0;
	int s1[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	/*loop through values in array s*/
	while (s[x] != '\0')
	{
		/**
		 * loop through array value five times
		 * to check if the value is equal to any
		 * lowercase letter in array s1 or
		 * uppercase letter in array u1 and if it is,
		 * replacevit with the value in array n
		 */
		for (i = 0; i < 5; i++)
		{
			if (s[x] == s1[i] || s[x] == ul[i])
			{
				s[x] = n[i];
				break;
			}
		}
		x++;
	}
	return (s);
}
