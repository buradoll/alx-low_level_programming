/**
 * leet - check the code
 *@s: parameter of fun
 * Return: Always 0.
 */
char leet(char s)
{
int i;
int n = sizeof(s);
for (i = 0; i <= n; i++)
{
if (s[i] <= 122 && s[i] >= 97)
{
s[i] -= 32;
}
}
}
