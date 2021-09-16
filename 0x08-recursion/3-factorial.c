/**
 * int factorial - check the code
 * @c: string for print
 * Return: void.
 */
int _putchar(char c);
int factorial(int n)
{
if (n == 0)
return (1);
if (n < 0)
return (-1);
return (n * factorial(n - 1));
}
