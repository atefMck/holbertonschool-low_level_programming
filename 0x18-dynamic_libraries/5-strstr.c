#include "holberton.h"
/**
* _strstr - find the 1st vence of the substring needle in haystack.
* @haystack: string.
* @needle: substring to look for.
* Return: pointer to the beginning of the located substring, NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0, j;
int v = 0;
char *r;

while (haystack[i])
{
if (needle[0] == '\0')
{
return (haystack);
}
if (needle[0] == haystack[i])
{
v = 1;
r = &haystack[i];
j = 0;
while (needle[j] && haystack[i])
{
if (needle[j] == haystack[i])
{
v = 1;
i++;
j++;
}
else
{
v = 0;
break;
}
}
if (v == 1)
{
return (r);
}
}
i++;
}
return (0);
}
