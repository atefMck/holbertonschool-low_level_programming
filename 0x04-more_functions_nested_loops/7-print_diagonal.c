#include "holberton.h"
/**
 * print_diagonal - drawing time
 * @n: longeur de diag
 * Return: Always 0.
 */
void print_diagonal(int n)
{
  int i,j;
  for(i = 1; i <= n; i++)
    {
      for(j = 0; j <= i; j++)
	{
	  if (j == i)
	    _putchar('\\');
	  else
	    _putchar(' ');
	}
      _putchar('\n');
    }
}
