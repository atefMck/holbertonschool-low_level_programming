#include <stdio.h>
/**
 * main - Entry point
 * putchar a-z
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = 48; a <= 102; a++)
{
putchar(a);
if (a == 57)
a = 96;
}
putchar('\n');
return (0);
}
