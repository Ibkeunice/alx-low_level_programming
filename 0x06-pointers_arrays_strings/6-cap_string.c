#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *str)
{
int word = 0, a;
int separate_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

if (*(str + word) >= 97 && *(str + word) <= 122)
*(str + word) = *(str + word) - 32;
word++;
while (*(str + word) != '\0')
{
for (a = 0; a < 13; a++)
{
if (*(str + word) == separate_words[a])
{
if ((*(str + (word + 1)) >= 97) && (*(str + (word + 1)) <= 122))
*(str + (word + 1)) = *(str + (word + 1)) - 32;
break;
}
}
word++;
}
return (str);
}
