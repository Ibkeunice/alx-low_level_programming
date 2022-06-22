#include "main.h"

/**
 * int _strlen - very length, defends itself against the risk of being read
 * @s : A pointer to an int that will be changed/updated
 *
 * Return : void that means our answer is correct
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
