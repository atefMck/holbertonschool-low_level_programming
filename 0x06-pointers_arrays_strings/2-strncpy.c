#include <unistd.h>
#include "holberton.h"
/**
* _strncpy - copie n bytes of a string
* @dest: The destination string
* @src: source string.
* @n: the num of char to cpy.
* Return: dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; j < n && src[j]; j++)
{
dest[j] = src[j];
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
