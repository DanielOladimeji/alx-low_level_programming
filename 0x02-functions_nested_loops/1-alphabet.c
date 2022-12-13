#include "main.h"

/**
 * print_alphabet - is the function that prints the alphabet, in lowercase
 * followed by a new line
 */
void print_alphabet(void)
{
	char az;

	az = 'a';

	while (az <= 'z')
	{
		_putchar(az);
		az++;
	}

	_putchar('\n');
}
