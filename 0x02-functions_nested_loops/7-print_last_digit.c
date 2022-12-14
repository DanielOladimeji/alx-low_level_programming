#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: the int or set of numbers to get last digit from
 * Return: the value of the last digit
 */
int print_last_digit(int r)
{
	int s;

	if (r < 0)
		r = -r;

	s = r % 10;

	if (s < 0)
		s = -s;

	_putchar(s + '0');

	return (a);
}
