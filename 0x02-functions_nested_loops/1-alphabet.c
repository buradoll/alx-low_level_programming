# include "main.h"
# include <stdio.h>
void print_alphabet(void);
/**
* main - Short description, single line
* Return: Description of the returned value
*/
int main(void)
{
int i;

print_alphabet(void)
{
for (i = 97; i < 122; i++)
putchar (i);
}
putchar (10);
return (0);
}
