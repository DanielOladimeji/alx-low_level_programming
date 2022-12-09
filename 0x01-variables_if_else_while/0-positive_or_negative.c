#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n subsequently
 * it executes, and prints it
 * Return: ALways 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zeo\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
