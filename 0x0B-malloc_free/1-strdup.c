#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - create an array with init
* @str: size of the array.
* Return: the array created
*/

char *_strdup(char *str)
{

unsigned int size = 0;
while (str[size])
size++;
if (size == 0)
return (NULL);

unsigned int i = 0;
char *r;
r = malloc(sizeof(char) * size + 1);
if (r == NULL)
{
free(r);
return (NULL);
}

while (i < size)
{
r[i] = str[i];
i++;
}

return (r);
}
