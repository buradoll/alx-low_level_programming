/**
 *_puts - check the code
 *_putchar - check the code
 * @c: string parameter
 */
int _putchar (char c);

/**
 *_puts - check the code
 * @str: string parameter
 * @i: variable for print output
 * @len: integer for count length of string
 */
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
 
 */
_putchar (str[i]);
}
_putchar ('\n');
}
