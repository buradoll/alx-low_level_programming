/**
 * alloc_grid - prints buffer in hexa
 * @width: num of width
 * @height: num of height
 * Return: pointer of a.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int **alloc_grid(int width, int height)
{
int **array;
int i;
array = malloc(height * sizeof(int *));
if (!array)
{
free(array);
}
for (i = 0; i < height; i++)
{
array[i] = malloc(width * sizeof(int));
if (!array)
free(array[i]);
}
return (array);
}
