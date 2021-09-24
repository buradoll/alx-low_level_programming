/**
 *array_range - check the code
 *@min: minnimum value
 *@max: maxmum value
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
int *arr;
int i;
int j;

arr = (int *) malloc(sizeof(int)*(max - min + 1));
if (min > max)
return (NULL);
j = max - min + 1;
if (arr == NULL)
return (NULL);
for(i = 0; i <= j; i++)
{
arr[i] = min;
min++;
if (min > max)
break;
}
return (arr);
}
