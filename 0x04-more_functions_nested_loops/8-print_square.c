#include "main.h"

/**
 * print_square - function that prints a square
 * @n: size of the square
 */

void print_square(int n)
{
int x;
int y;
if (n <= 0)
_putchar('\n');
for (y = 0; y < n; y++)
{
for (x = 0; x < n; x++)
_putchar('#');
_putchar('\n');
}
}
