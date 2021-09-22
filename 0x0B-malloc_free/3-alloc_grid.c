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
array = malloc(width * sizeof(int *));
if(array == NULL)
{
return (NULL);
}
for(i = 0; i < width; i++)
{
array[i] = malloc(height * sizeof(int));
if(array[i] == NULL)
{
return (NULL);
}
}
return (array);
}
