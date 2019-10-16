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
return NULL;
else
{

unsigned int size = 0;
while (str[size])
size++;


unsigned int i = 0;
char *r;
r = malloc(sizeof(char) * size);

while (i < size)
{
r[i] = str[i];
i++;
}

return (r);
}
}
