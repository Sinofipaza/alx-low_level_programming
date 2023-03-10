#include "main.h"
#include <stdio.h>

/**
 * main - function that multiplies two numbers
 * @argc: the size of the argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: zero if successful
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
		printf("Error\n");
	else
	{
		x = strtol(argv[1], 0, 10);
		y = strtol(argv[2], 0, 10);
		printf("%d\n", x * y);
	}
	return (0);
}
