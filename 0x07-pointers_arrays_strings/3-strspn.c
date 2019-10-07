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
unsigned int i, j, r = 1;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (accept[i] == s[j])
{
r++;
}
}
}
return (r);
}
