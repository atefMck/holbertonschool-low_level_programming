#include <unistd.h>
#include "holberton.h"
/**
 * _isdigit - checks if c is digit
 * @c: The int to check
 * Return: On success 1.
 */
int _isdigit(int c)
{
return ((c >= 48) && (c <= 57));
}
