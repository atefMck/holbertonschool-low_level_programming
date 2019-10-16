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

int size = 0;
if (s1 != '\0') {
while (s1[size] != '\0')
size++;
}


int size2 = 0;
if (s2 != '\0') {
while (s2[size2] != '\0')
size2++;
}


int i = 0;
char *r;
r = malloc(sizeof(char) * (size + size2 + 1));
if (r == NULL)
return NULL;

for (i = 0; i < size; i++)
r[i] = s1[i];

for (i = 0; i < size2; i++)
r[i + size] = s2[i];
r[size + size2] = '\0';

return (r);
}
