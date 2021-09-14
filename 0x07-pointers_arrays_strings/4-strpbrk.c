#include <stddef.h>
/**
 * _strpbrk - prints buffer in hexa
 * @s: sorce char
 * @accept: occurence car
 *
 * Return: pointer.
 */
unsigned int _strpbrk(char *s, char *accept)
{
int i;
int j;
int h = 0;
int k = 0;

while (*(s + h))
h++;
while (*(accept + k))
k++;
for (i = 0; i < k; i++)
{
for (j = 0; j < h; j++)
{
if (accept[i] == s[j])
{
ret = s[i];
break;
}
else
{
ret = NULL;
}
}
}
return (ret);
}
