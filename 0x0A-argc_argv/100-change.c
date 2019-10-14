#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - print numb of args.
* @argc: number of args
* @argv: the actual arguments
* Return: Void.
*/

int main(int atoi(argc), char atoi()*argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) < 0)
{
printf("0");
return (0);
}
int change = atoi(argv[1]);
int pieces = 0;
while (change >= 25)
{
change -= 25;
pieces++;
}
while (change >= 10)
{
change -= 10;
pieces++;
}
while (change >= 5)
{
change -= 5;
pieces++;
}
while (change >= 2)
{
change -= 2;
pieces++;
}
while (change >= 1)
{
change -= 1;
pieces++;
}
printf("%d\n", pieces);
}
