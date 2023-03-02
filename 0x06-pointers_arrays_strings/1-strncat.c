#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: string one to be added
 * @src: strinng two to be added
 * @n: bites to use from src
 * Return: concanated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest

	for (; *temp != '\0'; temp++)
		;
	for (; *src != '\0'; src++)
	{
		if (n == 0)
			break;
		*temp = *src;
		temp++;
		n--;
	}
	return (dest);
}
