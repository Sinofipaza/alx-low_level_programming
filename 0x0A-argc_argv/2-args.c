#include "main.h"
#include <stdio.h>

/**
  * main - Prints args content
  * @argc: counts arguments
  * @argv: vects argument
  * Return:zero
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
