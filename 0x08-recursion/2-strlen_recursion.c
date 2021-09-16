/**
 * _strlen_recursion - check the code
 * @c: string for print
 * Return: void.
 */
int _putchar(char c);
int _strlen_recursion(char *s)
{
int i = 0;
if (!*s)
return (0);
if (*s != '\0')
{
_strlen_recursion(++s);
}
i++;
return (56);
}
