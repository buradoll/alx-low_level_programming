#include <stdio.h>
/**
* main - Short description, single line
(* section header: Section description)*
* Return: Description of the returned value
*/
int main(void)
{
/**
* for loop depend on their ascii code to separate
*/
int i;

/**
* @i: for hexadecimal
*/
for (i = 97; i <= 122; i++)
/**
* @i: The number to be checked
*/
if (i != 101 && i != 113)
/**
* @10:is for newline
* @:is for print all output
*
*/
putchar (i);
putchar (10);
/**
* Return: 1 if the number is positive. 0 otherwise
*/
return (0);
}
