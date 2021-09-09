/**
 * _strcpy - check the code
 *
 * Return: return dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
int l;

l = 0;
while(*(src + 1) != '\0')
l++;
i = 0;
while(i <= l)
dest[i] = src[i];
return (dest);
}
