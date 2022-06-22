#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @str: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *str)
{
int change = 0;

while (*(str + change) != '\0')
{
if ((*(str + change) >= 97) && (*(str + change) <= 122))
*(str + change) = *(str + change) - 32;
change++;
}

return (str);
}
