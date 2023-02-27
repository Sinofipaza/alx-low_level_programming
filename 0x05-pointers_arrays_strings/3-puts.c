#include "main.h"

/**
 * puts - function that prints a string
 * @str - the string
 */

void _puts(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
