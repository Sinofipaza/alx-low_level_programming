#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: size of the line
 */

void print_line(int n)
{
for (; n > 0; n--)
_putchar('_');
_putchar('\n');
}
