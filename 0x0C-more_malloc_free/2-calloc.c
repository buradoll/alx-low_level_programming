#include <stddef.h>
/**
 * _calloc - prints buffer in hexa
 * @nmemb: number of element
 * @size: size of each memory
 * Return: pointer.
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
