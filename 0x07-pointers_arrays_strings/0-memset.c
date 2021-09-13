/**
 * _memset - prints buffer in hexa
 * @b: filled var
 * @s: address for fill
 * @n: bytes of filled
 * Return: *s.
 */
char *_memset(char *s, char b, unsigned int n)
{
int bu = 0;
while (bu < n)
{
*(s + bu) = b;
bu++;
}
return (*s);
}
