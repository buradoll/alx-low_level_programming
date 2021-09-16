/**
 * wildcmp - check the code
 * @s1: parameter to compare
 * @s2: parameter to compare
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
if (s1 != s2)
{
return (0);
}
if (*s1 && *s2)
wildcmp(s1 + 1, s2 + 1);
return (1);
}
