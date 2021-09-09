/**
 * _strcat - check the code
 *@dest: string parameter
 *@src: string parameter
 * Return: return dest.
 */
char *_strcat(char *dest, char *src);char *_strcat(char *dest, char *src)
{
int l = 0;
int i = 0;
int m;

while (*(dest + l) != '\0')
l++;
while (*(src + i))
i++;
i--;
m = 0;
while (m <= i)
{
dest[l + m] = src[m];
m++;
}
return dest;
}
