#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: file name.
 * @text_content: content of file.
 * Return: status.
 */
int create_file(const char *filename, char *text_content)
{

int o, w, len;
if (filename == NULL)
return (-1);

while (text_content[len])
len++;

o = open(filename, O_RDWR | O_CREAT | O_EXCL, S_IRUSR | S_IWUSR);
if (o < 0)
return (-1);

w = write(o, text_content, len);
if (w < 0)
return (-1);

close(o);
return (1);
}
