#include "holberton.h"

/**
 * read_textfile - reads and outputs text from a file.
 * @filename: file name.
 * @letters: letters it should print.
 * Return: num of char red.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int let;
char *buffer;
ssize_t r,w;

if (filename == NULL)
return 0;

let = open(filename, O_RDONLY);
if (let < 0)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

r = read(let, buffer, letters);
if (r < 0)
return (0);

w = write(STDIN_FILENO, buffer, r);
if (w < 0 || w != r)
return (0);

close(let);
return (w);
}
