#include "main.h"

/**
 * _memcpy - copies memory area,
 * @dest - memory destination area
 * @src: source memory area.
 * @n: bytes filled.
 * Returns : the ponter to destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
*(dest + i) =  *(src + i);

return (dest);
}
