#include <stdlib.h>
/**
 *array_range - check the code
 *@min: minnimum value
 *@max: maxmum value
 *Return: return pointer.
 */
int *array_range(int min, int max)
{
int *arr;
unsigned int i;
unsigned int j;

arr = malloc(sizeof(int) * (max - min + 1));
if (min > max)
return (NULL);
j = max - min;
j++;
if (arr == NULL)
return (NULL);
for (i = 0; i <= j; i++)
{
arr[i] = min;
min++;
if (min > max)
break;
}
return (arr);
}
