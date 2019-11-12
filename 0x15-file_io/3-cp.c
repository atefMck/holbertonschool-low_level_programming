#include "holberton.h"

/**
 * main - copies file.
 * @argc: num of args.
 * @argv: arguments.
 * Return: status.
 */
int main(int argc, char **argv)
{
int filefrom, fileto;
int r, w, c;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

filefrom = open(argv[1], O_RDONLY);
if (filefrom < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

r = read(filefrom, buffer, 1024);
if (r < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

c = close(filefrom);
if (c < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
exit(100);
}

/** Second file */

fileto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (filefrom < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

w = write(fileto, buffer, r);
if (w < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

c = close(fileto);
if (c < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
exit(100);
}

}
