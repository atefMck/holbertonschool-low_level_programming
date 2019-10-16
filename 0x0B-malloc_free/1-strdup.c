#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - create an array with init
* @str: size of the array.
* Return: the array created
*/

char *_strdup(char *str)
{
int size = 0;
int i = 0;
char *r;
if (str == NULL)
return (NULL);

for (; str[size] != '\0'; size++)
;

r = malloc(sizeof(char) * size + 1);
if (r == NULL)
return (NULL);

for (i = 0; i < size; i++)
r[i] = str[i];
r[size] = str[size];

return (r);
}
