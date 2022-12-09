#include <stdio.h>

/**
 * main -  prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; az--)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
