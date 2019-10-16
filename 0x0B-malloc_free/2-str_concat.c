#include <stdlib.h>
#include <stdio.h>

/**
* str_concat - create an array with init
* @s1: size of the array.
* @s2: size of the array.
* Return: the array created
*/

char *str_concat(char *s1, char *s2)
{
if (sizeof(s1) == 0)
return NULL;
else
{

unsigned int size = 0;
while (s1[size])
size++;

unsigned int size2 = 0;
while (s2[size2])
size2++;


unsigned int i = 0;
char *r;
r = malloc(sizeof(char) * (size + size2));

while (i < size)
{
r[i] = s1[i];
i++;
}

unsigned int j = 0;
while (j < size2)
{
r[i] = s2[j];
i++;
j++;
}

return (r);
}
}
