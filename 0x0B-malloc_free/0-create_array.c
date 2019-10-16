#include <stdlib.h>
#include <stdio.h>

/**
* create_array - create an array with init
* @size: size of the array.
* @c: the char to init
* Return: the array created
*/

char *create_array(unsigned int size, char c)
{
if (size == 0)
return (0);
else
{
unsigned int i = 0;
char *r;
r = malloc(sizeof(char) * size);
while (i < size)
{
r[i] = c;
i++;
}
return (r);
}
}
