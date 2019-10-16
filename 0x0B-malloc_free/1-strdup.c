#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - create an array with init
* @str: size of the array.
* Return: the array created
*/

char *_strdup(char *str)
{
int i = 0;
char *r;
int size = 0;
if (*str == '\0')
return (NULL);

while (str[size] != '\0')
size++;
size++;

r = malloc(sizeof(char) * size + 1);
if (r == '\0')
return (0);

for (i = 0; i < size; i++)
r[i] = str[i];
r[i] = str[i];

return (r);
}
