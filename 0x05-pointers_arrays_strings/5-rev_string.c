#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
int word = 0, i, d;
char *str, temp;

while (word >= 0)
{
if (s[word] == '\0')
break;
word++;
}
str = s;

for (i = 0; i < (word - 1); i++)
{
for (d = i + 1; d > 0; d--)
{
temp = *(str + d);
*(str + d) = *(str + (d - 1));
*(str + (d - 1)) = temp;
}
}
}
