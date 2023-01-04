#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string input
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string.
 * @s: string
 * @i1: smallest iterator.
 * @i2: biggest iterator.
 * Return: nothing
 */

int comparator(char *s, int i1, int i2)
{
	if (*(s + i1) == *(s + i2))
	{
	if (i1 == i2 || i1 == i2 + 1)
	return (1);
	return (0 + comparator(s, i1 + 1, i2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
