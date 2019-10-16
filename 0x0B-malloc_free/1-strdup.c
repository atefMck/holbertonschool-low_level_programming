#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - create an array with init
* @str: size of the array.
* Return: the array created
*/

char *_strdup(char *str)
{
if (*str == '\0')
return (NULL);

int size = 0;
while (str[size])
size++;

int i = 0;
char *r;
r = malloc(sizeof(char) * size + 1);
if (r == NULL)
return (NULL);

for (i = 0; i < size; i++)
r[i] = str[i];
r[i] = str[i];

return (r);
}
