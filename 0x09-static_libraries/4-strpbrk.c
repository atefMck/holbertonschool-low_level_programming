#include "holberton.h"
#include <stdio.h>

/**
* _strpbrk - fills memory with a constant byte.
* @s: the memory area to print in
* @accept: the memore to copy from
* Return: r.
*/

char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
return (&(s[i]));
}
}
return (0);
}
