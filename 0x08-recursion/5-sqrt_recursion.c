#include "holberton.h"
#include <stdio.h>

/**
* _pow_recursion - fills memory with a constant byte.
* @s: the memory area to print in
* Return: void.
*/

int _sqrt_recursion(int n)
{
if (n == 0)
return (-1);
return (n / _sqrt_recursion(n- 1));
}
