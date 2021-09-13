/**
 * _strchr - check the code
 *
 * Return: pointer of the occurence char.
 */
char *_strchr(char *s, char c)
{
int i = 0;

while(i <= sizeof(s))
{
if (s[i] == c)
{
return (s[i]);
break;
}
i++;
}
}
