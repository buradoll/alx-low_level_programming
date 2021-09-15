/**
 * _puts_recursion - check the code
 * _putchar - function for print the string
 * @s: string pointer for print
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
int i = 0;
char b;
b = *s;

if (*s != '\0')
{
_putchar(b);
i++;
_puts_recursion(s + 1);
}
else
{
_putchar(10);
}
}
