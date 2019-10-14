#include <stdio.h>

/**
 * main - print numb of args.
 * @argc: number of args
 * @argv: the actual arguments
 * Return: Void.
 */

void main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
}
