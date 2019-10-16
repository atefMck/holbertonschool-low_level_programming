#include <stdlib.h>
#include <stdio.h>

/**
* alloc_grid - create an array with init
* @width: size of the array.
* @height: size of the array.
* Return: the array created
*/

int **alloc_grid(int width, int height)
{

int **r;
int i = 0;
int j = 0;

if (width <= 0 || height <= 0)
return (NULL);

r = malloc(sizeof(*r) * height);
if (r == NULL)
return (NULL);

for (; i < height; i++)
{
r[i] = malloc(sizeof(**r) * width);
if (r[i] == NULL)
{
for (; i <= 0; i--)
free(r[i]);
free(r);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
r[i][j] = 0;
i++;
}

return (r);
}
