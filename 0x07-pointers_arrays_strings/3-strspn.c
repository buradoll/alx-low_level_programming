/**
 * _strspn - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 *
 * Return: m.
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int m = 0;
int h = 0;
int k = 0;

while (*(s + h))
h++;
while (*(accept + k))
k++;
for (i = 0; i < k; i++)
{
for (j = 0; j <= h; j++)
{
if (accept[i] == s[j])
{
m += 1;
}
}
}
return (m);
}
