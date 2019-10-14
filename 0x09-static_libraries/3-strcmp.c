#include <unistd.h>
#include "holberton.h"
/**
* _strcmp - copie n bytes of a string
* @s1: The destination string
* @s2: source string.
* Return: int.
*/
int _strcmp(char *s1, char *s2)
{
int j, sr;
sr = 0;
for (j = 0; s1[j] && s2[j]; j++)
{
if (s1[j] != s2[j])
{
sr = s1[j] - s2[j];
break;
}
}
return (sr);
}
