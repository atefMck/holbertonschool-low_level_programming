#include "holberton.h"
#include <stdio.h>

/**
* _pow_recursion - fills memory with a constant byte.
* @x: the memory area to print in
* @y: the memory area to print in
* Return: int.
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
