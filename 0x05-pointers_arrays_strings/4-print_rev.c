/**
 *_puts - check the code
 *_putchar - check the code
 * @c: string parameter
 * Return: no return
 */
void print_rev(char *str);
int _putchar (char c);
void print_rev(char *str)
{
int len = 0;
  
while (*(str + len))
len++;
while (len > 0)
{
/**
 *_putchar - check the code
 * @str: string parameter
 * Return: no return
 */
_putchar (str[len]);
len--;
}
_putchar ('\n');
}
