/**
 * _strcat - writes the character c to stdout
 * @dest: The character to print
 * @n: The character to print
 * @src: The character to print
 * Return: return dest.
 */
char *_strcat(char *dest, char *src, int n)
{
int l =0; int i =0; int li; int g; int m = 0;
while (*(dest + l))
l++;

while (*(src + i) != '\0')
i++;
i--;
li = i + l;
while(m < n)
{
dest[l+m] = src[m];
m++;
}
l++;
while(m <= i)
{
dest[l+m] = src[m];
m++;
}
return(dest);
}
