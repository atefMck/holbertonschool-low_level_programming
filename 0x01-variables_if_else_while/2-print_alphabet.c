#include <stdio.h>
/**
 * main - Entry point
 * putchar a-z
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = 97; a < 122; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
