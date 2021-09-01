# include "main.h"
# include <stdio.h>
/**
* main - Short description, single line
* Return: Description of the returned value
*/
void print_alphabet(void);
int main(void)
{
print_alphabet();
return(1);
}
void print_alphabet(void)
{
int i = 0;
for (i = 97; i < 123; i++)
putchar (i);
putchar (10);
return(1);
}
