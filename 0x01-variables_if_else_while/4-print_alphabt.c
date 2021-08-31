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
/**
* for loop depend on their ascii code to separate
*/
if (i != 101 && i != 113)
/**
* print using putchar
*/
putchar (i);
/**
* print using putchar
*/
putchar (10);
/**
* return value
*/
return (0);
}
