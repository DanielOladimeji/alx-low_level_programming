#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - concatenates all the arguments of a program
 *
 * @ac: number of arguments
 * @av: doulbe pointer array of the arguments in ac
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int i, j, k, n;

	if (ac == 0)
		return (NULL);

	for (n = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			n++;
		n++;
	}

	a = malloc((n + 1) * sizeof(char));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = j = k = 0; k < n; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			a[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < n - 1)
			a[k] = av[i][j];
	}
	a[k] = '\0';

	return (a);
}
