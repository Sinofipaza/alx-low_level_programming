#include "main.h"
#include <stdio.h>

/**
  * main - Prints number of args
  * @argc: counts arguments
  * @argv: vects argument
  * Return: zero
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
