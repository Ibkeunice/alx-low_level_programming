#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */

void print_rev(char *s)
{
int word = 0;

while (word >= 0)
{
if (s[word] == '\0')
break;
word++;
}

for (word--; word >= 0; word--)
_putchar(s[word]);
_putchar('\n');
}
