#include<stdio.h>
#include <stdlib.h>
/**
*my_main_function for single digit of base 10
*/
int main(void)
{
int i;
int l;

/**
* for loop
*/
for (i = 0;; i++)
{
l = i / 10;
if (l == 0)
{
printf("%d", i);
}
else
break;
}
putchar (10);
return (0);
}
