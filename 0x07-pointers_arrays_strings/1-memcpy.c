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

while (i < n)
{
if (sizeof(dest) == sizeof(src))
{
b = src[i];
dest[i] = b;
}
i++;
}
}
