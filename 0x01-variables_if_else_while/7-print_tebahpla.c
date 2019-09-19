#include <stdio.h>
/**
 * main - Entry point
 * putchar a-z
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = 122; a >= 97; a--)
{
putchar(a);
}
putchar('\n');
return (0);
}
