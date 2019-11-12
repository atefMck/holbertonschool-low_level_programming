#include "holberton.h"

/**
 * append_text_to_file - appends text to file.
 * @filename: file name.
 * @text_content: text to append.
 * Return: status.
 */
int append_text_to_file(const char *filename, char *text_content)
{

int o, w, len;
if (filename == NULL)
return (-1);


o = open(filename, O_WRONLY | O_APPEND);
if (o < 0)
return (-1);

if (text_content != NULL)
{
while (text_content[len])
len++;

w = write(o, text_content, len);
if (w < 0)
return (-1);
}

close(o);
return (1);
}
