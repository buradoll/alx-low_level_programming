/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int arr[n];
int i = 0;

while (i < n)
{
arr[i] = a[i];
i++;
}
i = 0;
while (i < n)
{
a[n - i] = arr[i];
i++;
}
}
