#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Short description, single line
 * Return: Description of the returned value
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%.d is positive\n", n);
else if (n < 0)
printf("%.d is negative\n", n);
else
printf("%01d is zero\n", n);
/**
*return - return zero we will say then it work
*/
return (0);
}
