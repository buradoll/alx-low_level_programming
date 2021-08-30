#include<stdio.h>
#include <stdlib.h>
/**
*my_function - This is a description
*/
int main(void)
{
int i;
int l;

for (i = 0;; i++)
{
l = i / 10;
if (l == 0)
{
putchar (i + '0');
}
else
break;
}
putchar (10);
return (0);
}
