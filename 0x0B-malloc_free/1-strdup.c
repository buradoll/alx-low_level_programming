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

if (str == NULL)
return (NULL);
a = malloc(sizeof(str));
*a = str;
if (a == NULL)
return (NULL);
return (a);
}
