/**
 * create_array - prints buffer in hexa
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: pointer of a.
 */
#include <stdlib.h>
#include <stddef.h>
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;

i = 0;
if (size == 0)
return NULL;
a = malloc(size * sizeof(char));
if (a == NULL)
return NULL;
while (i < size)
{
a[i] = c;
i++;
}
return (a);
}
