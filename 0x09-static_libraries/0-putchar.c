#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
char text[8] = "_putchar";
int n = 0;
for (n = 0; n < 8; n++)
{
_putchar(text[n]);
}
_putchar('\n');
return (0);
}
