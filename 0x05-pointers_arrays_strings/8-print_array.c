#include <stdio.h>
/**
 *_puts - check the code
 *_putchar - check the code
 * @c: string parameter
 *_puts - check the code
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
return (0);
}
