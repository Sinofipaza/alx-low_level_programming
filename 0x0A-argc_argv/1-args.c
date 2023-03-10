#include "main.h"
#include <stdio.h>

/**
 * main - function that prints number of arguments followed by a new line
 * @argc: the size of the argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
