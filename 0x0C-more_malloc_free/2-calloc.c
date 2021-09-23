/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *d;
int i = 0;

if ((nmemb == 0) || (size == 0))
return (NULL);
while (i <= nmemb)
{
d = malloc(size);
i++;
}
if (d == NULL)
return (NULL);
return (d);
}
