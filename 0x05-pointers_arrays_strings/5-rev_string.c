/**
 *print_rev - check the code
 *_putchar - check the code
 * @s: string parameter
 * Return: no return
 */
void rev_string(char *s);
int _putchar (char c);
void rev_string(char *s)
{
int len = 0;

while (*(s + len) != '\0')
len++;
len--;
while (len >= 0)
{
/**
 *_putchar - check the code
 * Return: no return
 * @s: string parameter
 */
_putchar (s[len]);
len--;
}
_putchar ('\n');
}
