#include "main.h"

/**
 * swap_int - function that swaps integer using two integers parameters
 *
 * @a; input parameter 1
 * @b; input parameter 2
 *
 * Return : Nothing
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
