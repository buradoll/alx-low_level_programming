/**
 * _strchr - check the code
 * @s: parameter 
 * @c: parameter
 *
 * Return: pointer of the occurence char.
 */
char *_strchr(char *s, char c)
{
int i = 0;
int h = 0;

while (*(s + h))
h++;
while(i <= h)
{
if (s[i] == c)
{
return (s[i]);
break;
}
i++;
}
}
