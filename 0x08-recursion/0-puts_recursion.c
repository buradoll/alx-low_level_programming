/**
 * _puts_recursion - check the code
 * _putchar - function for print the string
 * @s: string pointer for print
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
int q = 0;
int i;

if (*s != '\0')
{

_putchar(*s);
i++;
_puts_recursion(s + 1);
}
else
{
_putchar(10);
return (0);
}
}
