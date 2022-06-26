#include "main.h"
#include <stdio.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

int main(void)
{
char *b = "hello, world";
char *c = "world";
char *d;

d = _strstr(b, c);
printf("%s\n", d);
return (0);
}
