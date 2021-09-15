/**
 * _puts_recursion - check the code
 * @c: string for print
 * Return: void.
 */
int _putchar(char c);
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
