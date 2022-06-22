#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
int i, c, temp;

for (i = 0; i < n - 1; i++)
{
for (c = i + 1; c > 0; c--)
{
temp = *(a + c);
*(a + c) = *(a + (c - 1));
*(a + (c - 1)) = temp;
}
}
}
