#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string.
 * @s: first occurence of string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int t, f;

for (t = 0; *(s + t) != '\0'; t++)
{
for (f = 0; *(accept + f) != '\0'; f++)
{
if (*(s + t) == *(accept + f))
return (s + t);
}
}
return ('\0');
}
