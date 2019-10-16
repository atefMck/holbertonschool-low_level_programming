#include <stdlib.h>
#include <stdio.h>

/**
* argstostr - create an array with init
* @ac: size of the array.
* @av: size of the array.
* Return: char
*/

char *argstostr(int ac, char **av)
{
char *r;
int i, j, k = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
k++;
}
r = malloc(sizeof(char) * k + 1 + ac);
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
r[k] = av[i][j];
k++;
}
r[k] = '\n';
k++;
}
return (r);
}
