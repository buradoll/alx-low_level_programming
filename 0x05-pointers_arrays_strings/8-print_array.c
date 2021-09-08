#include <stdio.h>
/**
 *print_array - check the code
 *_putchar - check the code
 *printf - check the code
 * @c: string parameter
 * @a: string parameter
 * @n: string parameter
 * Return: no return
 */
int _putchar (char c);
void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf ("%d", a[i]);
if ((i + 1) < n)
printf (", ");
else
break;
i++;
}
printf ("\n");
}
