#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - create an array with init
* @str: size of the array.
* Return: the array created
*/

char *_strdup(char *str)
{
if (sizeof(str) == 0)
return (0);

int size = 0;
for (; str[size] != 0; size++)
;

int i = 0;
char *r;

r = malloc(sizeof(char) * size + 1);
if (sizeof(r) == 0)
return (0);

for (i = 0; i < size; i++)
r[i] = str[i];
r[size] = str[size];

return (r);
}
