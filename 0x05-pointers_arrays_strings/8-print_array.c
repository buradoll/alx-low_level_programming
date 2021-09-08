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
int x;

x = 0;
while(*(a+x) !='\0')
x++;
while (i <= n)
{
printf ("%d",a[i]);
printf (", ");
i++;
}
printf ("\n");
}
