#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */

void _puts(char *str)
{
int word = 0;

while (word >= 0)
{
if (str[word] == '\0')
{
_putchar('\n');
break;
}
_putchar(str[word]);
word++;
}
}
