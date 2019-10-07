#include "holberton.h"
#include <stdio.h>

/**
* _strchr - fills memory with a constant byte.
* @s: the memory area to print in
* @c: the memore to copy from
* Return: r.
*/

char *_strchr(char *s, char c)
{
int i;
do
{
if (s[i] == c)
return (&(s[i]));
i++;
}
while (s[i]);
return (0);
}
