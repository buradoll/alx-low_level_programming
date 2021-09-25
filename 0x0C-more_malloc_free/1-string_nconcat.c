#include <stdlib.h>
/**
 * string_nconcat - check the code
 * @s1: char parameter
 * @s2: char parameter
 * @n: length of concat
 * Return: malloc pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *d;
unsigned int i = 0;
unsigned int j = 0;
unsigned int x = 0;
unsigned int y = 0;

while (*(s1 + i))
i++;
while (*(s2 + j))
j++;
if (n >= j)
n = j;
d = malloc(sizeof(char) * (i + n));
if (d == NULL)
return (NULL);
if (*s1 != '\0')
if (s1 != NULL && d != NULL)
while (x < i)
{
d[x] = s1[x];
x++;
}
if (*s2 != '\0')
if (s2 != NULL && d != NULL)
while (y < n)
{
d[x] = s2[y];
x++;
y++;
}
return (d);
}
