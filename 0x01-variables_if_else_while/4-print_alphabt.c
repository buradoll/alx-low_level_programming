#include <stdio.h>
/**
* main function for print alpabet except e & q
*/
int main(void)
{
int i;

/**
* for loop depend on their ascii code to separate
*/
for (i = 97; i <= 122; i++)
if (i != 101 && i != 113)
putchar (i);
putchar (10);
return (0);
}
