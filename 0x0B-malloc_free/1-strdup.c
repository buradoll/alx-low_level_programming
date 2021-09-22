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

while (*(str + j))
j++;
j++;
if (str[0] == N)
return (NULL);
a = malloc(sizeof(char) * j);
while (i <= j)
{
a[i] = str[i];
i++;
}
if (a == NULL)
return (NULL);
return (a);
}
