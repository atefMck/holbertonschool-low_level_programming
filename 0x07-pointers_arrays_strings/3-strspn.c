#include "holberton.h"
#include <stdio.h>

/**
* _strspn - fills memory with a constant byte.
* @s: the memory area to print in
* @accept: the memore to copy from
* Return: r.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, r = 0;
for (i = 0; accept[i]; i++)
{
for (j = 0; s[j]; j++)
{
if (accept[i] == s[j])
{
r++;
break;
}
}
}
return (r);
}
