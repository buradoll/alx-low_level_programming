/**
 * _strcmp - check the code
 *@s1: parameter
 *@s2: parameter
 * Return: Always f.
 */
int _strcmp(char *s1, char *s2)
{
int f = 0;
int i = 0;

while ((s1[i] != '\0') || (s2[i] != '\0'))
{
if (s1[i] == s2[i])
{
f = 0;
}
else
f = s1[i] - s2[i];
return f;
}
}
