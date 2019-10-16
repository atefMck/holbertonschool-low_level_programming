#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - create an array with init
* @grid: size of the array.
* @height: size of the array.
* Return: the array created
*/

void free_grid(int **grid, int height)
{
int i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
