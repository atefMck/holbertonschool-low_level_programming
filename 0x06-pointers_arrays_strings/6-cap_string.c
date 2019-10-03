#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
/**
* cap_string - copie n bytes of a string
* @s: The destination string
* Return: s.
*/
char *cap_string(char *s)
{
int i, j;
while (s[i])
i++;
j = 0;
while (j < i)
{
if (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t' || s[j - 1] == '.')
{
if (s[j] >= 97 && s[j] <= 122)
s[j] = s[j] - 32;
}
j++;
}
return (s);
}
