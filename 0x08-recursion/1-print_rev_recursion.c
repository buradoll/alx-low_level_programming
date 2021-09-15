/**
 * _puts_recursion - check the code
 * @c: string for print
 * Return: void.
 */
int _putchar(char c);
void _puts_recursion(char *s)
{
char b;
b = *s;

if (*s != '\0')
{
_putchar(b);
_puts_recursion();
}
}
