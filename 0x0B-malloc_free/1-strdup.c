/**
 * _strdup - prints buffer in hexa
 * @str: the address of memory to duplicate
 *
 * Return: pointer of a.
 */
#include <stdlib.h>
#include <stddef.h>
char *_strdup(char *str)
{
char *a;
unsigned int j = 0;
unsigned int i = 0;

if (*str == '\0')
return (NULL);
while (*(str + j))
j++;
j++;
a = malloc(sizeof(char) * j);
if (a == NULL)
return (NULL);
while (i <= j)
{
a[i] = str[i];
i++;
}
return (a);
}
