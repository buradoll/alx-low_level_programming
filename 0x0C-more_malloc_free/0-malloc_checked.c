#include <stdlib.h>
/**
 * string_nconcat - check the code
 * @s1: char parameter
 * @s1: char parameter
 * @n: length of concat
 * Return: malloc pointer.
 */
void *malloc_checked(unsigned int b)
{
int *d;

d = malloc(b);
if (d == NULL)
return (NULL);
return (d);
}
