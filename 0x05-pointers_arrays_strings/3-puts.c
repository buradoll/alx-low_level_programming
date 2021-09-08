/**
 *_puts - check the code
 *
 * @str: string parameter
 * @l: integer for count length of string 
 */
int _putchar (char c);
void _puts(char *str)
{
int i;
int len = 0;
while (*(str + len))
len++;
for (i = 0;i <= len; i++)
{
_putchar (str[len]);
}
_putchar ('\n');
}
