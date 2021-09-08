/**
 *_puts - check the code
 *_putchar - check the code
 * @c: string parameter
 *_puts - check the code
 * Return: no return
 */
int _putchar (char c);
void _puts(char *str)
{
int i;
int len = 0;
while (*(str + len))
len++;
for (i = 0; i < len ; i++)
{
/**
 *_putchar - check the code
 * @str: string parameter
 * Return: no return
 */
_putchar (str[i]);
}
_putchar ('\n');
}
