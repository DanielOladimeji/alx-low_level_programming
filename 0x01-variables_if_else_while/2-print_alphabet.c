#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, 
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
