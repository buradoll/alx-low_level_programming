/**
 * str_concat - prints buffer in hexa
 * @s1: the address of memory to concatnate
 * @s2: the address of memory to concatnate
 * Return: pointer of a.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
char *str_concat(char *s1, char *s2)
{
char *a;
unsigned int j = 0;
unsigned int i = 0;
unsigned int y = 0;
unsigned int x = 0;
unsigned int s;

while (*(s1 + j))
i++;
i--;
while (*(s2 + j))
j++;
s = i + j;
a = malloc(sizeof(char) * s);
if (s1 == NULL || s2 == NULL)
return (NULL);
while (x <= i)
{
a[x] = s1[x];
x++;
}
while (y <= sizeof(s2))
{
a[x] = s2[y];
x++;
y++;
}
if (a == NULL)
return (NULL);
return (a);
}
