#include <unistd.h>
#include "holberton.h"
/**
* _strncat - concatinates n bytes two strings
* @dest: The destination string
* @src: source string.
* @n: the num of char to concat.
* Return: dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i])
i++;
for (j = 0; j < n && src[j]; j++)
{
dest[i + j] = src[j];
}
return (dest);
}
