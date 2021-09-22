/**
 * create_array - prints buffer in hexa
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: pointer of a.
 */
#include <stdlib.h>
#include <stddef.h>
char *_strdup(char *str)
{
char *a;
unsigned int i = 0;

if (str == NULL)
return (NULL);
a = malloc(sizeof(str));
while (i < sizeof(str))
{
a[i] = str[i];
i++;
}
if (a == NULL)
return (NULL);
return (a);
}
