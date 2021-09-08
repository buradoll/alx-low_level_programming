/**
 *print_rev - check the code
 *_putchar - check the code
 * @str: string parameter
 * Return: no return
 */
void print_rev(char *str);
int _putchar (char c);
void print_rev(char *str)
{
int len = 0;
int i;

while (*(str + len) !='\0')
len++;
i= 0;
while (len >= 0)
{
/**
 *_putchar - check the code
 * Return: no return
 * @str: string parameter
 */
*s = s[len];
len--;
i++;
}
_putchar ('\n');
}
