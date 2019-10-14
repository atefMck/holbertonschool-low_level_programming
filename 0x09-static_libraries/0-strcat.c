#include <unistd.h>
#include "holberton.h"
/**
* _strcat - concatinates two strings
* @dest: The destination string
* @src: source string.
* Return: src.
*/
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i])
i++;
for (j = 0; j <= i; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = src[j];
return (dest);
}
