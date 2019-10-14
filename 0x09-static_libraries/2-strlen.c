#include <unistd.h>
#include "holberton.h"
/**
 * _strlen - checks the length of a string
 * @s: The string to check
 * Return: return length of string.
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i))
i++;
return (i);
}
