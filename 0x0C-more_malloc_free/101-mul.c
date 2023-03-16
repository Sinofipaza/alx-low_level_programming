#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - multiplies two positive numbers.
 * @s: string
 * Return: 0 if a non-digit is found, error otherwise
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
