# include <stdio.h>
/**
* main - Short description, single line
* Return: Description of the returned value
*/
void print_alphabet_x10(void);
int main(void)
{
print_alphabet_x10();
result(0);
}

void print_alphabet_x10(void)
{
int j=0;
int i;
while (j<10)
{
for (i = 97; i < 123; i++)
putchar (i);
putchar (10);
j++;
}
}
