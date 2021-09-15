/**
 * _print_rev_recursion - check the code
 * @c: string for print
 * Return: void.
 */
int _putchar(char c);
void _print_rev_recursion(char *s)
{
int i = 0;

if (i == 0)
while(*(s + i))
i++;
i--;
if (i >= 0)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
