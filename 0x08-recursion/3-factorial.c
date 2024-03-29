#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: number to get factorial of
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
