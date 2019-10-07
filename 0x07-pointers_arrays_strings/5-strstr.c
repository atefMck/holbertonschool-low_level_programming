#include "holberton.h"
#include <stdio.h>

/**
* _strstr - fills memory with a constant byte.
* @haystack: the memory area to print in
* @needle: the memore to copy from
* Return: r.
*/

char *_strstr(char *haystack, char *needle)
{
int i, j, v = 0;
for (i = 0; haystack[i]; i++)
{
if (needle[0] == haystack[i])
{
v = i;
for (j = 0; needle[j]; j++)
{
if (needle[j] != haystack[v])
{
v = 0;
break;
}
else
v++;
}
}
if (v != 0)
return(&(haystack[i]));
}
return (0);
}
