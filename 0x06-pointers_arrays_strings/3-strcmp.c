/**
 * _strcmp - check the code
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int f = 0;
int i = 0;
int g;
while (s1[i] != '\0' || s2[i] != '\0')
{
if (s1[i] == s2[i])
{
f=0;
}
else if (s1[i] != s2[i])
f = s1[i] - s2[i];
g += f;
return f;
}
}
