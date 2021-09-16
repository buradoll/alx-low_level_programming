/**
 * _strlen_recursion - check the code
 * @c: string for print
 * Return: void.
 */
int _putchar(char c);
int _strlen_recursion(char *s)
{
int i = 0;

if (*s == '\0')
{
return (i);
}
else
{
i++;
_strlen_recursion(++s);
}
return (i);
}
