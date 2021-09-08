/**
 *puts_half - check the code
 *_putchar - check the code
 * @str: string parameter
 * Return: no return
 */
void puts_half(char *str);
int _putchar (char c);
void puts_half(char *str)
{
int len = 0;
int i;

while (*(str + len) != '\0')
len++;
if ((len % 2) == 0)
i = len / 2;
else
i = ((len - 1) / 2) + 1;
while (i < len)
{
/**
 *_putchar - check the code
 * Return: no return
 * @str: string parameter
 */
_putchar (str[i]);
i++;
}
_putchar ('\n');
}
