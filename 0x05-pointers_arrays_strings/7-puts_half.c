#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_half(char *str)
{
int word = 0, i;

while (word >= 0)
{
if (str[word] == '\0')
break;
word++;
}

if (word % 2 == 1)
i = word / 2;
else
i = (word - 1) / 2;

for (i++; i < word; i++)
_putchar(str[i]);
_putchar('\n');
}
