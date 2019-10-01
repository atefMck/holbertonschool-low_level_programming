#include "holberton.h"
/**
 * _strcpy - copies string to another
 * @dest: the string to copy in
 * @src: the string to copy from
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
for (i = 0; *(src + i); i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
