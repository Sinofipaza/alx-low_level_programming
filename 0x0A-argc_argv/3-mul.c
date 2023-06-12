#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to multiplies two numbers
 * @argc: number of command line arguments
 * @argv: an array containing command line arguments
 * Return: 0 if it runs
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
