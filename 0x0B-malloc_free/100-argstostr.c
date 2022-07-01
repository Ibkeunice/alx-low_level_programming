#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
char *aout;
int d, a, b, ia;

if (ac == 0)
return (NULL);

for (d = a = 0; a < ac; a++)
{
if (av[a] == NULL)
return (NULL);

for (b = 0; av[a][b] != '\0'; b++)
d++;
d++;
}

aout = malloc((d + 1) * sizeof(char));

if (aout == NULL)
{
free(aout);
return (NULL);
}

for (a = b = ia = 0; ia < d; b++, ia++)
{

if (av[a][b] == '\0')
{
aout[ia] = '\n';
a++;
ia++;
b = 0;
}
if (ia < d - 1)
aout[ia] = av[a][b];
}
aout[ia] = '\0';

return (aout);
}
