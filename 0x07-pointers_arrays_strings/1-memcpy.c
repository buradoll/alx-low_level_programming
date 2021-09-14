/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
char b;

while(*(dest+l))
l++;
while(*(src+k))
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
