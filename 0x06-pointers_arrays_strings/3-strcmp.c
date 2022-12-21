/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string1 input to be compared
 * @s2: string2 input to be compared against s1
 *
 * Return: 0 if s1 and s2 are equal,
 * Negative integer if the stopping character in s1
 * is less than the stopping character in s2
 * Positive integer if the stopping character in s1
 * is greater than the stopping character in s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, x;

	/*loop through src and compare it with dest*/
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/**
		 * if they differ by a single character,
		 * end loop
		 */
		if (s1[i] != s2[i])
		{
			/**
			 * return the difference between
			 * the two characters
			 */
			x = s1[i] - s2[i];
			break;
		}
		else
		{
			x = s1[i] - s2[i];
		}
		i++;
	}
	
	return (x);
}
