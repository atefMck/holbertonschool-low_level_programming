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
int i;
int sum = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]))
sum += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
else
printf("0\n");
return (0);
}
