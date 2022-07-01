#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
int *arr;
int i;

if (minimum > maximum)
return (NULL);

arr = malloc(sizeof(*arr) * ((maximum - minimum) + 1));

if (arr == NULL)
return (NULL);

for (i = 0; minimum <= maximum; i++, minimum++)
arr[i] = minimum;

return (arr);
}
