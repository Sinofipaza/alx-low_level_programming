#include "main.h"
#include <stdio.h>

/**
  * is_prime_number - Returns if a number is prime
  * @n: the number to be checked
  * Return: integer
  */

int is_prime_number(int n)
{
	if (n == 1 || n == -1 || n == 0)
		return (0);
	return (help(n, 2));
}
