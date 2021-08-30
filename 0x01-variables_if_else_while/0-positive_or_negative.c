#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*random generate number
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/**
*if else for determine sign of the num
*/
if (n > 0)
printf("%.d is positive\n", n);
else if (n < 0)
printf("%.d is negative\n", n);
else
printf("%01d is zero\n", n);
/**
*return 0
*/
return (0);
}
