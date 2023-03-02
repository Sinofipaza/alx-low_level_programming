#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: string one to be added
 * @src: tring 2 to be added
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	for (; *temp != '\0'; temp++)
		;
	for (; *src != '\0'; src++)
	{
		*temp = *src;
		temp++;
	}
	*temp = *src;
	return (dest);
}
