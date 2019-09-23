#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
  int i;
  if (n < 98)
    {
  for (i = n; i < 98; i++)
	printf("%d, ", i);
    }
  else if ( n > 98)
    {
      for (i = n; i > 98; i--)
	printf("%d, ", i);
    }
  else
    {
	printf("98");
    }
  printf("98\n");
}
