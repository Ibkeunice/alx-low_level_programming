#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int word1 = 0, word2 = 0;

while (*(dest + word1) != '\0')
{
word1++;
}

while (word2 < n)
{
*(dest + word1) = *(src + word2);
if (*(src + word2) == '\0')
break;
word1++;
word2++;
}
return (dest);
}
