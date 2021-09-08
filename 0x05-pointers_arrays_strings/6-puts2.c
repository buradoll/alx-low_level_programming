/**
 *puts2 - check the code
 *_putchar - check the code
 * @str: string parameter
 * Return: no return
 */
void puts2(char *str);
int _putchar (char c);
void puts2(char *str)
{
int len = 0;
int i;

while (*(str + len) != '\0')
len++;
i = 0;
while (i < len)
{
/**
 *_putchar - check the code
 * Return: no return
 * @str: string parameter
 */
_putchar (str[i]);
i++;
i++;
}
_putchar ('\n');
}
