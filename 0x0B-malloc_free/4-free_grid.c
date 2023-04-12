#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid  - frees up a grid
 * @grid: grid to check
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return;
if (height <= 0)
return;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
