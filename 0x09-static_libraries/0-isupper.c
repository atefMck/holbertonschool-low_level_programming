#include <unistd.h>
#include "holberton.h"
/**
 * _isupper - checks if c is upper case
 * @c: The character to check
 * Return: On success 1.
 */
int _isupper(int c)
{
return ((c >= 65) && (c <= 90));
}
