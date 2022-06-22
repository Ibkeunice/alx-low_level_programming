#include "main.h"

/**
 * print_alphabet_x10 -print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
int cycle = 0;
char alphabet = 'a';
while (cycle < 10)
{
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
cycle++;
}
}
