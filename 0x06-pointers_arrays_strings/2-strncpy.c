/**
 * _strncpy - check the code
 *@dest: parameter
 *@src: parameter
 *@n: parameter
 * Return: return dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return dest;
}
