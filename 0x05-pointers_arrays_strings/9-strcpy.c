/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i;
int l;

i = 0;
l = 0;
while(*(src + 1) != '\0')
l++;
while(i <= l)
*dest[i] = src[i];
}
