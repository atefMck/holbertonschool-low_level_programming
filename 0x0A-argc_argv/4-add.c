#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - print numb of args.
* @argc: number of args
* @argv: the actual arguments
* Return: Void.
*/

int main(int argc, char *argv[])
{
int i, j;
int sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!(isdigit(argv[i][j])))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
