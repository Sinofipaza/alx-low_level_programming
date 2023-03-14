#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of args
 * @av: args
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int x, y, len = 0, c;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
		len += _strlen(av[x]);

	ptr = malloc((len + ac + 1) * sizeof(char));

	if (!ptr)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, c++)
			ptr[c] = av[x][y];
		ptr[c] = '\n';
		c++;
	}
	ptr[c] = '\0';
	return (ptr);
}
