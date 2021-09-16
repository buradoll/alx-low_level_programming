/**
 * _strlen_recursion - check the code
 * @c: string for print
 * Return: void.
 */
int _putchar(char c);
int _strlen_recursion(char *s)
{
int i = 0;

if (s[i] != '\0')
{
_strlen_recursion(s + 1);
i++;
}
return (i);
}
