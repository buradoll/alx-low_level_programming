/**
 * _memcpy- prints buffer in hexa
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: number of cpy
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
char b;
int l;
int k;

while (*(dest + l))
l++;
while (*(src + k))
k++;
while (i < n)
{
if (k == l)
{
b = src[i];
dest[i] = b;
}
i++;
}
}
