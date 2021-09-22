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
int j = 0;
int i = 0;
int y = 0;
int x = 0;
int s;

while (*(s1 + i))
i++;
i--;
while (*(s2 + j))
j++;
s = i + j;
a = malloc(sizeof(char) * s);
if (s1 == NULL && s2 == NULL)
return (0);
if (s1 == NULL)
return (s2);
if (s2 == NULL)
return (s1);
while (x <= i)
{
a[x] = s1[x];
x++;
}
while (y <= j)
{
a[x] = s2[y];
x++;
y++;
}
return (a);
}
