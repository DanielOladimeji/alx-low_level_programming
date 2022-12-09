#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int mian(void)
{
	int x;
	char az;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (az = 'a'; az <= 'f'; az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
