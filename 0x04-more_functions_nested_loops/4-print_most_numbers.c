#include "main.h"

/**
 * print_most_numbers -  checks for checks for a digit (0 - 9)
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
char num;
for (num = 0; num < 10; num++)
{
if (num != 2 && num != 4)
_putchar(num + '0');
}
_putchar('\n');
}
