#include "main.h"

/**
 * print the alphabet 10 times in lowecase
 * return 0
 */

void print_alphabet_x10(void);
{
char i;
int x;
x=0;

while(x<10)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar ('\n');
x++;
}
}
