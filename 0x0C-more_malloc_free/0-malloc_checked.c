#include <stdlib.h>
/**
 * malloc_checked - check the code
 * @b: length of concat
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
