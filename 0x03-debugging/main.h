#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);
int largest_number(int a, int b, int c);
void print_remaining_days(int month, int day, int year);
int convert_day(int month, int day);

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
int a, b, c;
int largest;

a = 972;
b = -98
c = 0;

largest = largest_number(a, b, c);

printf("%d is the largest number\n", largest);

return (0);
}
#endif /** main_h */
