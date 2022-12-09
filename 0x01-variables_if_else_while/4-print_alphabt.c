#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
		az++;
	}
	putchar('\n');
	return (0);
}
