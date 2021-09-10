/**
 * string_toupper - check the code
 *@f: parameter of fun
 * Return: Always 0.
 */
char *string_toupper(char *f)
{
int i;
int n = sizeof(f);
for (i = 0; i <= n; i++)
{
if (f[i] <= 122 && f[i] >= 97)
{
f[i] -= 32;
}
}
