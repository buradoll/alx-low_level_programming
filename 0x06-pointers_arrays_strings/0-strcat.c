/**
 * _strcat - check the code
 *@dest: string parameter
 *@src: string parameter
 * Return: return dest.
 */
char *_strcat(char *dest, char *src)
{
int l =0;
int i =0;
int li;
int g;
int m = 0;
while (*(dest + l) != '\0')
l++;
l--;
while (*(src + i) != '\0')
i++;
i--;
li = i + l;
while (m <= i)
{
dest[l + m] = src[m];
m++;
}
return (dest);
}
