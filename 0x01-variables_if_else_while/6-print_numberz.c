#include<stdio.h>
#include <stdlib.h>
/**
*my_function - This is a description
*/
int main(void)
{
int i;
int l;
int m = 0;

for (i = 0;; i++)
{
l = i / 10;
if (l == 0)
{
char c = i + '0';
putchar (c);
}
else
break;
}
putchar (10);
return (0);
}
