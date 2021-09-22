#include <stddef.h>
/**
 * free_grid - prints buffer in hexa
 * @grid: 2d array
 * @height: height of the array
 * Return:no return
 */
void free_grid(int **grid, int height)
{
int i = 0;

for (i = 0; i <= height; i++)
free(grid[i]);
free(grid);
}
