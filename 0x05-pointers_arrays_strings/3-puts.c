/**
 *_puts - check the code
 *
 * @str: string parameter
 * @l: integer for count length of string 
 */
void _puts(char *str)
{
int len = 0;
while (*(str + len))
len++;
while (len > 0)
{
_putchar(str[len]);
len--;
}
}
