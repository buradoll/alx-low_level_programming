#include<stdio.h>
#include <stdlib.h>
/*lower and upper case*/
int main(void)
{
int i;
/*print alphabet with lower case*/
for (i = 97; i <= 122; i++)
putchar(i);
/*print alphabet with Upper case*/
for (i = 65; i <= 90; i++)
putchar(i);
/*newline*/
putchar(10);
return(0);
}
