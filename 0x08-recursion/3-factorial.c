#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @num : input number.
 * Return: factorial of the number
 */

int factorial(int num)
{
if (num < 0)
return (-1);
else if (num == 0)
return (1);
else
return (num * factorial(num - 1));
}
