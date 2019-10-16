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
int k = 0;

if (width <= 0 || height <= 0)
return (NULL);

r = malloc(sizeof(int *) * height);
if (r == NULL)
return (NULL);

for (; i < height; i++)
{
r[i] = malloc(sizeof(int) * width);
if (r[i] == NULL)
{
for (k = 0; k < i; k++)
free(r[k]);
free(r);
return (NULL);
}
for (j = 0; j < width; j++)
r[i][j] = 0;
}
return (r);
}
